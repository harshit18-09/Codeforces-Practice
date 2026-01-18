#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        for (char c : s) {
            assert(c == 's' || c == 'u');
        }

        int n = s.length();
        vector<int> arrhc;
        for (int i = 0; i < n; i++) {
            if (s[i] == 's') arrhc.push_back(i);
        }

        if (arrhc.empty()) {
            cout << (n / 2 + 1) << "\n";
            continue;
        }

        long long ans = 0;

        int pref = arrhc[0];
        if (pref > 0) {
            ans += (pref + 1) / 2;
        }

        for (int i = 0; i + 1 < (int)arrhc.size(); i++) {
            int lenhc = arrhc[i + 1] - arrhc[i] - 1;
            if (lenhc > 0) ans += lenhc / 2;
        }

        int suffixhc = n - 1 - arrhc.back();
        if (suffixhc > 0) {
            ans += (suffixhc + 1) / 2;
        }

        cout << ans << "\n";
    }
}
