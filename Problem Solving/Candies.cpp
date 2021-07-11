#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'candies' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */

long candies(int n, vector<int> arr) {
    vector<int> candyLeft(arr.size(),1);
    vector<int> candyRight(arr.size(),1);
    long count=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[i-1]){
            candyLeft[i]=candyLeft[i-1]+1;
        }
    }
    for(int i=arr.size()-1;i>=0;--i){
        if(arr[i]>arr[i+1]){
            candyRight[i]=candyRight[i+1]+1;
        }
    }
    for(int i=0;i<arr.size();i++){
        candyLeft[i]=max(candyLeft[i],candyRight[i]);
    }
    for(int i=0;i<arr.size();i++){
        count+=candyLeft[i];
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

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
