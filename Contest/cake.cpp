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
        vector<int> arrhc(n);
        for(int i=0; i<n; i++) cin>>arrhc[i];
        int currsumhc = arrhc[0], maxi = arrhc[0];
        cout<<arrhc[0]<<" ";

        for(int i=1; i<n; i++){
            currsumhc += arrhc[i];
            int currhc = currsumhc / (i + 1);
            maxi = min(maxi, currhc);
            cout<<maxi<<" ";
        }
        cout<<endl;
    }
    return 0;
}