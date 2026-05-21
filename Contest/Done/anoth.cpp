// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int nhc;
    cin>>nhc;
    vector<int> arrhc(nhc);
    
    bool sortedhc = true;
    int Lhc = 0;
    
    for (int i = 0; i < nhc; i++) {
        cin >> arrhc[i];
        if (i > 0) {
            if (arrhc[i - 1] > arrhc[i]) {
                sortedhc = false;
                Lhc = max(Lhc, arrhc[i - 1] - arrhc[i]);
            }
        }
    }

    if (sortedhc) {
        cout<<"YES"<<endl;;
        return;
    }

    bool can0hc = true;
    bool can1hc = true;

    for (int i = 0; i < nhc - 1; i++) {
        bool next0hc = false;
        bool next1hc = false;
        int diffhc = arrhc[i + 1] - arrhc[i];

        if (can0hc) {
            if (diffhc >= 0) next0hc = true;   
            next1hc = true;                  
        }
        if (can1hc) {
            if (diffhc >= 0) next1hc = true;   
            if (diffhc >= Lhc) next0hc = true;   
        }

        can0hc = next0hc;
        can1hc = next1hc;
    }

    if (can0hc || can1hc) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}