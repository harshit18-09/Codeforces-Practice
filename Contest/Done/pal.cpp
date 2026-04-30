// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int nhc;
    cin>>nhc;
    int lenhc = 2 * nhc;
    vector<int> arrhc(lenhc);
    for (int i = 0; i < lenhc; i++) {
        cin>>arrhc[i];
    }

    int maxhc = 0;
    vector<bool> seenhc(nhc + 2, false);

    auto chhc = [&](int Lhc, int Rhc) {
        while (Lhc >= 0 && Rhc < lenhc && arrhc[Lhc] == arrhc[Rhc]) {
            Lhc--;
            Rhc++;
        }
        
        Lhc++;
        Rhc--;
        
        if (Lhc > Rhc) return; 

        for (int i = Lhc; i <= Rhc; i++) {
            if (arrhc[i] <= nhc) {
                seenhc[arrhc[i]] = true;
            }
        }
        
        int mex = 0;
        while (seenhc[mex]) {
            mex++;
        }
        
        maxhc = max(maxhc, mex);
        
        for (int i = Lhc; i <= Rhc; i++) {
            if (arrhc[i] <= nhc) {
                seenhc[arrhc[i]] = false;
            }
        }
    };

    for (int i = 0; i < lenhc; i++) {
        chhc(i, i);
        
        if (i + 1 < lenhc) {
            chhc(i, i + 1);
        }
    }

    cout<<maxhc<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}