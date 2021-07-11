#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hr = s.substr(0,2);
    int x = stoi(hr);
    size_t pos = s.find("PM");
    if(pos != string::npos){
        if(x + 12 < 24){
            hr = to_string(x + 12);
        }
    }
    else{
        if(x == 12)
        hr = "00";
    }
    return s.replace(0,2,hr).erase(s.size()-2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
