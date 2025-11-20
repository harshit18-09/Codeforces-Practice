#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> ans = a;
        
        // Strategy: Make a[0] and a[n-1] equal if possible to get 0 difference
        if (ans[0] == -1 && ans[n-1] == -1) {
            ans[0] = ans[n-1] = 0;
        } else if (ans[0] == -1) {
            ans[0] = ans[n-1];
        } else if (ans[n-1] == -1) {
            ans[n-1] = ans[0];
        }
        
        // Fill remaining -1's with 0 for lex smallest
        for (int i = 0; i < n; i++) {
            if (ans[i] == -1) ans[i] = 0;
        }
        
        long long result = abs(ans[n-1] - ans[0]);
        cout << result << "\n";
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}