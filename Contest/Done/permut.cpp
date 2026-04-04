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
        cin >> nhc;
        for (int ihc = 0; ihc < nhc; ++ihc) {
            cout << ihc+1 << ' ' << nhc+1+2*ihc << ' ' << nhc+2+2*ihc << ' ';
        }
        cout <<endl;
    }
    return 0;
}