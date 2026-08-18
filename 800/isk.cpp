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
        int max_len = 0, curr = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '#'){
                curr++;
                max_len = max(max_len, curr);
            }
            else{
                curr = 0;
            }
        }

        int ans = (max_len/2) + (max_len%2);
        cout<<ans<<endl;
    }
    return 0;
}