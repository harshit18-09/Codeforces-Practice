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

        int c0hc = 0, c1hc = 0, c2hc = 0;

        for (int i = 0; i < nhc; i++) {
            int xhc;
            cin>>xhc;

            if (xhc == 0) c0hc++;
            else if (xhc == 1) c1hc++;
            else c2hc++;
        }

        int phc = min(c1hc, c2hc);

        int anshc = c0hc + phc;
        c1hc -= phc;
        c2hc -= phc;

        anshc += c1hc / 3;
        anshc += c2hc / 3;

        cout<<anshc<<endl;
    }
    return 0;
}