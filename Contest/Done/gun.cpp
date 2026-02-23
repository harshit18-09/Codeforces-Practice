#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long nhc, hhc, khc;
    cin >> nhc >> hhc >> khc;
    vector<long long> ahc(nhc);
    long long shc = 0;
    for (int i = 0; i < nhc; ++i) {
        cin >> ahc[i];
        shc += ahc[i];
    }
    
    vector<long long> preffhc(nhc);
    preffhc[0] = ahc[0];
    for(int i = 1; i < nhc; ++i) {
        preffhc[i] = preffhc[i - 1] + ahc[i];
    }
    
    vector<long long> minipreffhc(nhc);
    minipreffhc[0] = ahc[0];
    for(int i = 1; i < nhc; ++i) {
        minipreffhc[i] = min(minipreffhc[i - 1], ahc[i]);
    }
    
    vector<long long> maxisuffhc(nhc + 1, 0);
    for(int i = nhc - 1; i >= 0; --i) {
        maxisuffhc[i] = max(maxisuffhc[i + 1], ahc[i]);
    }
    
    long long anshc = -1;
    
    for(int xhc = 1; xhc <= nhc; ++xhc) {
        long long pxhc = preffhc[xhc - 1];
        if (xhc < nhc) {
            pxhc = max(pxhc, preffhc[xhc - 1] - minipreffhc[xhc - 1] + maxisuffhc[xhc]);
        }
        
        long long reqhc = hhc - pxhc;
        long long chc = 0;
        if (reqhc > 0) {
            chc = (reqhc + shc - 1) / shc;
        }
        
        long long thc = chc * (nhc + khc) + xhc;
        if (anshc == -1 || thc < anshc) {
            anshc = thc;
        }
    }
    cout << anshc << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int thc;
    if (cin >> thc) {
        while (thc--) {
            solve();
        }
    }
    return 0;
}