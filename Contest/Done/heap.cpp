#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int nhc;
        cin >> nhc;

        vector<int> arrhc(nhc + 1);
        for (int i = 1; i <= nhc; i++) {
            cin >> arrhc[i];
        }

        bool posshc = true;

        for (int ihc = 1; ihc <= nhc; ihc++) {
            if (ihc % 2 == 1) {
                vector<int> indhc;
                vector<int> valshc;

                int jhc = ihc;
                while (jhc <= nhc) {
                    indhc.push_back(jhc);
                    valshc.push_back(arrhc[jhc]);
                    jhc *= 2;
                }

                sort(valshc.begin(), valshc.end());
                for (int khc = 0; khc < indhc.size(); khc++) {
                    if (valshc[khc] != indhc[khc]) {
                        posshc = false;
                        break;
                    }
                }
            }

            if (!posshc) break;
        }

        cout << (posshc ? "YES\n" : "NO\n");
    }

    return 0;
}
