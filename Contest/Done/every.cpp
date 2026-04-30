// Author: Harshit_1809
#include <bits/stdc++.h>
using namespace std;

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

        long long anshc = 0;
        for (int ihc = 0; ihc + 1 < nhc; ihc++) {
            int ahc = arrhc[ihc], b = arrhc[ihc + 1];
            int diffhc = abs(ahc - b);
            int mnhc = min(ahc, b);
            if (mnhc % diffhc == 0) anshc++;
        }

        cout<<anshc<<endl;
    }

    return 0;
}