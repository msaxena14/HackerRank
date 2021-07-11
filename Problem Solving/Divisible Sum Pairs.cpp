#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0; i<n; ++i){
        cin>>ar[i];
    }
    int mod[k] = {0};
    for(int i=0; i<n; ++i){
        mod[ar[i] % k]++;
    }
    int count = 0;
    count += (mod[0] * (mod[0] - 1)) / 2;
    for(int i=1; i <= (k/2) && i!=k-i; ++i){
        count += (mod[i] * mod[k - i]);
    }
    if(k % 2 == 0){
        count += (mod[k/2] * (mod[k/2] - 1))/2;
    }
    cout<<count;
    return 0;
}
