#include <bits/stdc++.h>
using namespace std;

bool check(const string& s) {
    int n = s.size();
    vector<vector<char>> dp(n, vector<char>(n, 0));
    for (int i = 0; i < n; i++) {
        dp[i][i] = (s[i] == 'N') ? 1 : 2;
    }
    
    for (int i = 2; i <= n; i++) {
        for (int jhc = 0; jhc + i <= n; jhc++) {
            int r = jhc + i - 1;
            for (int k = jhc; k < r; k++) {
                int left = dp[jhc][k];
                int right = dp[k+1][r];
                
                char possible = 0;
                if ((left & 1) && (right & 1)) possible |= 1;
                if ((left & 2) && (right & 1)) possible |= 2;
                if ((left & 1) && (right & 2)) possible |= 2;
                
                dp[jhc][r] |= possible;
            }
        }
    }
    
    return dp[0][n-1] != 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (check(s) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}