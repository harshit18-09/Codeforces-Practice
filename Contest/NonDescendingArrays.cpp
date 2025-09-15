#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    vector<pair<int, int>> pairs(n);
    for (int i = 0; i < n; i++) {
        pairs[i].first = min(a[i], b[i]);
        pairs[i].second = max(a[i], b[i]);
    }
    sort(pairs.begin(), pairs.end());
    
    vector<vector<int>> dp(n, vector<int>(2, 0));
    dp[0][0] = 1;
    dp[0][1] = 1;
    
    for (int i = 1; i < n; i++) {
        for (int s = 0; s < 2; s++) {
            int curr_first, curr_second;
            if (s == 0) {
                curr_first = pairs[i].first;
                curr_second = pairs[i].second;
            } else {
                curr_first = pairs[i].second;
                curr_second = pairs[i].first;
            }
            for (int prev_s = 0; prev_s < 2; prev_s++) {
                int prev_first, prev_second;
                if (prev_s == 0) {
                    prev_first = pairs[i-1].first;
                    prev_second = pairs[i-1].second;
                } else {
                    prev_first = pairs[i-1].second;
                    prev_second = pairs[i-1].first;
                }
                if (prev_first <= curr_first && prev_second <= curr_second) {
                    dp[i][s] = (dp[i][s] + dp[i-1][prev_s]) % MOD;
                }
            }
        }
    }
    
    int ans = (dp[n-1][0] + dp[n-1][1]) % MOD;
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}