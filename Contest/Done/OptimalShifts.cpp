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
        string s;
        cin >> s;
        s += s;

        int best = 0, cur = 0;
        for (char c : s) {
            if (c == '0') {
                cur++;
                best = max(best, cur);
            } else cur = 0;
        }
        best = min(best, n);
        cout << best << "\n";
    }
}
