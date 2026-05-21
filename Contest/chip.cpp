// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int nhc;
    cin>>nhc;
    vector<int> arrhc(nhc);
    for (int i = 0; i < nhc; i++){
        cin>>arrhc[i];
    }

    vector<pair<int, int>> reehc;
    reehc.reserve(nhc * 60);

    for (int i = 0; i < nhc; i++) {
        int xhc = arrhc[i];
        int disthc = 0;
        
        bool visited1hc = false;
        bool visited2hc = false;

        while (true) {
            if (xhc == 1) {
                if (visited1hc) break;
                visited1hc = true;
            }
            if (xhc == 2) {
                if (visited2hc) break;
                visited2hc = true;
            }

            reehc.push_back({xhc, disthc});

            if (xhc % 2 == 0) {
                xhc /= 2;
            } 
            else {
                xhc += 1;
            }
            disthc++;
        }
    }

    sort(reehc.begin(), reehc.end());

    int minipshc = -1;
    int mhc = reehc.size();
    
    for (int i = 0; i < mhc; ) {
        int jhc = i;
        int cursumhc = 0;
        int counthc = 0;
        
        while (jhc < mhc && reehc[jhc].first == reehc[i].first) {
            cursumhc += reehc[jhc].second;
            counthc++;
            jhc++;
        }
        
        if (counthc == nhc) {
            if (minipshc == -1 || cursumhc < minipshc) {
                minipshc = cursumhc;
            }
        }
        
        i = jhc;
    }

    cout<<minipshc<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}