// Author: Harshit_1809
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 676767677;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int nhc;
        cin >> nhc;
        vector<int> arrhc(nhc);
        for (int i = 0; i < nhc; i++) cin >> arrhc[i];
        
        int lastidxhc = -1;
        for (int i = nhc - 1; i >= 0; i--) {
            if (arrhc[i] > 1) { lastidxhc = i; break; }
        }
        
        long long chc = 0;
        for (int i = 0; i < nhc; i++) {
            if (arrhc[i] > 1) chc += arrhc[i];
        }
        
        bool hashc = false;
        for (int i = 0; i < nhc; i++) {
            if (arrhc[i] == 1 && i > lastidxhc) {
                hashc = true;
                break;
            }
        }
        
        if (hashc) chc += 1;
        
        cout<<chc % MOD<<endl;
    }
    
    return 0;
}