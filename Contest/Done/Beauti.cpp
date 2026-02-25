#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int thc;
    cin >> thc;

    while (thc--) {
        string xhc;
        cin >> xhc;

        int nhc = xhc.size();
        int sumhc = 0;

        for (char chc : xhc)
            sumhc += chc - '0';

        if (sumhc <= 9) {
            cout<<0<<endl;
            continue;
        }

        int extrahc = sumhc - 9;
        vector<int> redhc;
        redhc.push_back((xhc[0] - '0') - 1);

        for (int i = 1; i < nhc; i++) {
            redhc.push_back(xhc[i] - '0');
        }

        sort(redhc.rbegin(), redhc.rend());

        int anshc = 0;

        for (int rhc : redhc) {
            if (extrahc <= 0) break;
            extrahc -= rhc;
            anshc++;
        }

        cout<<anshc<<endl;
    }

    return 0;
}