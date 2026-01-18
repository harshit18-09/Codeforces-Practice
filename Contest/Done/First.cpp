#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (n == 1) {
            cout << a[0] << '\n';
            continue;
        }
        
        // dp[i][s][u]: s=0 for +, s=1 for -, u=0/1 for 0 not used/used
        vector<vector<vector<long long>>> dp(n, 
            vector<vector<long long>>(2, vector<long long>(2, -1e18)));
        
        // Initialize
        dp[0][0][0] = a[0];  // a[0] as +
        dp[0][0][1] = 0;     // a[0] as 0
        
        for (int i = 1; i < n; i++) {
            // Case 1: a[i] as +
            // Can come from previous as + or -, 0 used or not
            dp[i][0][0] = max(dp[i-1][0][0], dp[i-1][1][0]) + a[i];
            dp[i][0][1] = max(dp[i-1][0][1], dp[i-1][1][1]) + a[i];
            
            // Case 2: a[i] as -
            // Previous must be + (not 0), and 0 not used at i
            if (i == 1) {
                // Special case: can have a[0] as + and a[1] as -
                dp[i][1][0] = dp[0][0][0] - a[i];
                // Or a[0] as 0 and a[1] as -? No, can't have - without + before
            } else {
                dp[i][1][0] = dp[i-1][0][0] - a[i];
                dp[i][1][1] = dp[i-1][0][1] - a[i];
            }
            
            // Case 3: a[i] as 0 (use 0 now)
            // Can come from any previous state with 0 not used yet
            dp[i][0][1] = max(dp[i][0][1], max(dp[i-1][0][0], dp[i-1][1][0]));
        }
        
        long long ans = max({dp[n-1][0][0], dp[n-1][1][0], dp[n-1][0][1], dp[n-1][1][1]});
        cout << ans << '\n';
    }
    
    return 0;
}