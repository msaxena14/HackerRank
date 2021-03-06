#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'decentNumber' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void decentNumber(int N) {
     if (N < 3)
        cout << "-1";
    else if (N % 3== 0) {
        for (int i=0; i<N; i++)
            cout << '5';
    }
    else
    {   int a = 5;  //To find a : (N-a)%3==0 and a%5==0
        while (N-a > 0) {        
            if ((N-a) %3 != 0)
                a += 5;
            else
                break;
        }
        if(N-a>=0) {
        for (int i=0; i<N-a; ++i)
            cout << '5';
        for (int i=0; i<a ; ++i)
            cout << '3';
        }
        else
         cout <<"-1";
    }
    cout << '\n';
}

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        decentNumber(n);
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
