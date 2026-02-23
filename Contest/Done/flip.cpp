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

        string shc;
        cin >> shc;

        vector<int> oppshc;
        int oneshc = 0;

        for (char chc : shc) {
            if (chc == '1') oneshc++;
        }

        int zeroshc = nhc - oneshc;

        if (oneshc % 2 == 0) {
            for (int ihc = 0; ihc < nhc; ihc++) {
                if (shc[ihc] == '1')
                    oppshc.push_back(ihc + 1);
            }
        }
        else if (zeroshc % 2 == 1) {
            for (int ihc = 0; ihc < nhc; ihc++) {
                if (shc[ihc] == '0')
                    oppshc.push_back(ihc + 1);
            }
        }
        else {
            cout << -1 << "\n";
            continue;
        }

        cout << oppshc.size() << "\n";
        for (int indxhc : oppshc) {
            cout << indxhc << " ";
        }
        cout << "\n";
    }

    return 0;
}