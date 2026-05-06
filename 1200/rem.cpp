// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = n-1;

        for(int i=0; i<n-2; i++){
            if(s[i] == s[i+2]){
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}