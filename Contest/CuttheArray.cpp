#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> prefix_sum_mod3(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum_mod3[i + 1] = (prefix_sum_mod3[i] + a[i]) % 3;
    }

    for (int l = 1; l < n; ++l) {
        for (int r = l + 1; r < n; ++r) {
            int s1 = prefix_sum_mod3[l];
            int s2 = (prefix_sum_mod3[r] - prefix_sum_mod3[l] + 3) % 3;
            int s3 = (prefix_sum_mod3[n] - prefix_sum_mod3[r] + 3) % 3;

            if ((s1 == s2 && s2 == s3) || (s1 != s2 && s1 != s3 && s2 != s3)) {
                cout << l << " " << r << endl;
                return;
            }
        }
    }

    cout << "0 0" << endl;
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