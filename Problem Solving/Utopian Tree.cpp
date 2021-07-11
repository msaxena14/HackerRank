#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int ans = 1;
    while(t--){
        int n;
        cin>>n;  
            for(int i=0; i<n; ++i){
                if(i & 1){
                    ans += 1;
                }
                else{
                    ans *= 2;
                }
            }
        cout<<ans<<'\n';
        ans = 1;
    }
    return 0;
}
