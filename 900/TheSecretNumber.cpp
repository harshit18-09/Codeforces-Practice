#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;
        vector<long long> ans;
        int c = 0;
        long long x10 = 10;

        while(x10 < n){
            if(n%(1+x10) == 0){
                c++;
                ans.push_back(n/(x10+1));
            }
            x10 *= 10;
        }

        cout<<c<<endl;
        if(c > 0){
            for(int i=ans.size()-1; i>=0; i--){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}