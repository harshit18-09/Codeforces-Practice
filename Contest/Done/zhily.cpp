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
        int nhc;
        cin>>nhc;
        vector<int> arrhc(nhc);
        for (int i = 0; i < nhc; ++i) cin>>arrhc[i];
        int currhc = arrhc[nhc-1];
        int anshc = (currhc > 0) ? 1 : 0;
        for (int i = nhc-2; i >= 0; --i) {
            if (currhc > 0) currhc = arrhc[i] + currhc;
            else currhc = arrhc[i];
            if (currhc > 0) anshc++;
        }
        cout<<anshc<<endl;
    }
    return 0;
}