#include <bits/stdc++.h>
using namespace std;

int infhc = 1e9+7;

bool adjacent(int uhc, int vhc) {
    if (uhc == vhc) return false;
    if (uhc + vhc == 7) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int nhc;
        cin >> nhc;

        vector<int> arrhc(nhc);
        for (int i = 0; i < nhc; i++)
            cin >> arrhc[i];
        vector<vector<int>> dphc(nhc, vector<int>(7, infhc));

        for (int ihc = 1; ihc <= 6; ihc++) {
            dphc[0][ihc] = (arrhc[0] != ihc);
        }
        for (int ihc = 1; ihc < nhc; ihc++) {
            for (int currhc = 1; currhc <= 6; currhc++) {
                for (int prehc = 1; prehc <= 6; prehc++) {
                    if (adjacent(prehc, currhc)) {
                        dphc[ihc][currhc] = min(dphc[ihc][currhc],
                                         dphc[ihc - 1][prehc] + (arrhc[ihc] != currhc));
                    }
                }
            }
        }
        int anshc = infhc;
        for (int x = 1; x <= 6; x++) {
            anshc = min(anshc, dphc[nhc - 1][x]);
        }

        cout<<anshc<<"\n";
    }

    return 0;
}
