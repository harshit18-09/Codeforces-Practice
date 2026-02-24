#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long total_dist = 0;
    for (int i = 0; i < n - 1; i++) {
        total_dist += abs(a[i] - a[i+1]);
    }
    long long max_savings = abs(a[0] - a[1]);

    max_savings = max(max_savings, abs(a[n-2] - a[n-1]));

    for (int i = 1; i < n - 1; i++) {
        long long current_edges = abs(a[i-1] - a[i]) + abs(a[i] - a[i+1]);
        long long new_edge = abs(a[i-1] - a[i+1]);
        long long savings = current_edges - new_edge;
        max_savings = max(max_savings, savings);
    }

    cout << total_dist - max_savings << endl;
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