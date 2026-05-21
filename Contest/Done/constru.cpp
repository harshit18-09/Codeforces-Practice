// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int nhc;
        cin>>nhc;
        for (int ihc = 1; ihc <= nhc; ++ihc) {
            cout<<2*ihc-1;
            if(ihc<nhc) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}