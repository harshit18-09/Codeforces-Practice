#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        int diff_odd = 0, diff_even = 0;
        int sum_a = 0, sum_b = 0;
        
        for (int i = 0; i < n; i++) {
            sum_a ^= a[i];
            sum_b ^= b[i];
            
            if (a[i] != b[i]) {
                if ((i + 1) % 2 == 1) diff_odd++;
                else diff_even++;
            }
        }
        
        // The key insight: each controllable position allows a player
        // to potentially flip one bit in BOTH arrays
        
        // If the number of controllable positions has the same parity,
        // then it's a tie if initial scores are equal, otherwise the 
        // player with initial advantage wins
        
        // If the parities are different, the player with more moves wins
        
        if (diff_odd % 2 == diff_even % 2) {
            // Same parity - check initial advantage
            if (sum_a > sum_b) cout << "Ajisai\n";
            else if (sum_a < sum_b) cout << "Mai\n";
            else cout << "Tie\n";
        } else {
            // Different parity - player with more moves wins
            if (diff_odd > diff_even) cout << "Ajisai\n";
            else cout << "Mai\n";
        }
    }
    
    return 0;
}