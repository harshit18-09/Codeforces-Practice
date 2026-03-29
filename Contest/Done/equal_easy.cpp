#include <bits/stdc++.h>
using namespace std;

void solve() {
    int nhc, khc;
    cin >> nhc >> khc;

    vector<int> arrhc(nhc + 1);
    for (int i = 1; i <= nhc; ++i) {
        cin >> arrhc[i];
    }

    vector<int> brrhc(nhc + 1);
    for (int i = 1; i <= nhc; ++i) {
        cin >> brrhc[i];
    }

    bool posshc = true;
    vector<bool> allhc(nhc + 1, false);

    for (int i = nhc - khc + 1; i <= khc; ++i) {
        allhc[arrhc[i]] = true;
    }

    for (int i = 1; i <= nhc; ++i) {
        if (i <= nhc - khc || i >= khc + 1) {
            if (brrhc[i] != -1 && brrhc[i] != arrhc[i]) {
                posshc = false;
                break;
            }
        } 
        else {
            if (brrhc[i] != -1) {
                if (!allhc[brrhc[i]]) {
                    posshc = false; 
                    break;
                } else {
                    allhc[brrhc[i]] = false; 
                }
            }
        }
    }

    if (posshc) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}