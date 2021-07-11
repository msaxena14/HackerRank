#include<bits/stdc++.h>
using namespace std;

int main(){
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        int luck ,bal = 0, imp, count = 0;
        for(int i=0; i<n; ++i){
            cin>>luck>>imp;
            if(imp){
                arr.push_back(luck);
                ++count;
            }
            bal += luck;
        }
        sort(arr.begin(), arr.end());
        int sub = 0;
        for(int i=0; i<(count - k); ++i){
            sub += arr[i];
        }
        cout<< (bal - 2*sub) <<'\n';      
    return 0;
}
