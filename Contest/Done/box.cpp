#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int thc;
    cin >> thc;

    while (thc--) {
        int nhc, mhc, dhc;
        cin >> nhc >> mhc >> dhc;
        int maxihc = dhc / mhc + 1;
        int towershc = (nhc + maxihc - 1) / maxihc;
        cout << towershc << "\n";
    }

    return 0;
}