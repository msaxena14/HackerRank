#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int viralAdvertising(int n) {
    int shared = 5;
    int liked  = 0;
    int sum = 0;
    int again_shared = 0;
    for(int i=1; i<=n; ++i){
        liked = floor(shared / 2);
        sum += liked;
        again_shared = liked * 3;
        shared = again_shared;
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

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
