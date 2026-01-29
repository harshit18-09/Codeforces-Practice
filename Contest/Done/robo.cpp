#include <bits/stdc++.h>
using namespace std;

int gdCode = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, mhc, k;
        cin >> n >> mhc >> k;
        
        vector<int> ahc(n), bhc(mhc);
        for (int i = 0; i < n; i++) cin >> ahc[i];
        for (int i = 0; i < mhc; i++) cin >> bhc[i];
        
        string insthc;
        cin >> insthc;
        
        sort(ahc.begin(), ahc.end());
        sort(bhc.begin(), bhc.end());
        vector<bool> alhc(n, true);
        
        int ahc_count = n;
        vector<int> anshc(k);
        int offhc = 0;
        
        for (int i = 0; i < k; i++) {
            if (insthc[i] == 'L') offhc--;
            else offhc++;
            
            int dehc = 0;
            for (int spike : bhc) {
                long long target = (long long)spike - offhc;
                if (target < -1e9 || target > 2e9) continue;
                int idx = lower_bound(ahc.begin(), ahc.end(), target) - ahc.begin();
                if (idx < n && ahc[idx] == target && alhc[idx]) {
                    alhc[idx] = false;
                    dehc++;
                }
            }
            
            ahc_count -= dehc;
            anshc[i] = ahc_count;
            
            if (ahc_count == 0) {
                for (int j = i + 1; j < k; j++) {
                    anshc[j] = 0;
                }
                break;
            }
        }
        
        for (int i = 0; i < k; i++) {
            cout << anshc[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}