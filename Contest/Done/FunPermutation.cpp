#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n), pos(n+1);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }
    vector<int> q(n);
    int current = 1;
    for (int i = n; i >= 1; i--) {
        q[pos[i]] = current++;
    }
    for (int i = 0; i < n; i++) {
        cout << q[i] << (i == n-1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}