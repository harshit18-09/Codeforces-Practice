#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        vector<long long> odd, even;
        for (auto x : a) {
            if (x % 2) odd.push_back(x);
            else even.push_back(x);
        }

        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());

        vector<long long> odd_pref(odd.size()+1, 0), even_pref(even.size()+1, 0);
        for (int i = 0; i < odd.size(); i++) odd_pref[i+1] = odd_pref[i] + odd[i];
        for (int i = 0; i < even.size(); i++) even_pref[i+1] = even_pref[i] + even[i];

        for (int k = 1; k <= n; k++) {
            long long ans = 0;
            for (int x = 1; x <= min(k, (int)odd.size()); x += 2) { // odd count must be odd
                int y = k - x;
                if (y < 0 || y > even.size()) continue;
                ans = max(ans, odd_pref[x] + even_pref[y]);
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
}
