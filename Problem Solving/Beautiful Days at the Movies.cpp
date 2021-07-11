#include<bits/stdc++.h>

using namespace std;

int main(){
        int i,j,k;
        cin>>i>>j>>k;
        vector<int> res;
        for(int l=i; l<=j; ++l){
            string temp = to_string(l);
            reverse(temp.begin(), temp.end());
            int m = stoi(temp);
            float dif = abs(l - m);
            float q = float(dif / k);
            if(abs(q - int(q)) > 0){
                ;
            }
            else{
                res.push_back(l);
            }
        }
        cout<<res.size()<<'\n';
    return 0;
}
