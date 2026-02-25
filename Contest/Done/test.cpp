#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long s, m;
        cin >> s >> m;

        if (m == 0) {
            cout << -1 << "\n";
            continue;
        }

        long long g = m & -m;   // smallest power of 2 dividing m

        if (s % g != 0) {
            cout << -1 << "\n";
        } 
        else {
            long long n = (s + m - 1) / m;  // ceil(s / m)
            cout << n << "\n";
        }
    }

    return 0;
}