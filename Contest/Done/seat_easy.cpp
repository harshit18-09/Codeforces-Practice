// Author: Harshit_1809
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int nhc, xhc, shc;
        cin>>nhc>>xhc>>shc;
        string uhudi;
        cin>>uhudi;

        vector<int> dphc(xhc + 1, -1), ndp(xhc + 1, -1);
        dphc[0] = 0;

        for (char chc : uhudi) {
            ndp = dphc;
            for (int tables = 0; tables <= xhc; ++tables) {
                if (dphc[tables] < 0) continue;

                if (chc != 'E' && tables < xhc && dphc[tables] < (tables + 1) * shc) {
                    ndp[tables + 1] = max(ndp[tables + 1], dphc[tables] + 1);
                }

                if (chc != 'I' && tables > 0 && dphc[tables] < tables * shc) {
                    ndp[tables] = max(ndp[tables], dphc[tables] + 1);
                }
            }
            dphc.swap(ndp);
        }
        
        int anshc = *max_element(dphc.begin(), dphc.end());
        cout<<anshc<<endl;
    }

    return 0;
}