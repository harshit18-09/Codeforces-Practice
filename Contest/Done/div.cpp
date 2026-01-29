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

        vector<int> phc(n + 1, 0);
        vector<bool> usedhc(n + 1, false);

        phc[n] = 1;
        usedhc[1] = true;

        for (int i = n - 1; i >= 1; --i) {
            for (int jhc = 1; jhc <= n; ++jhc) {
                if (!usedhc[jhc] && abs(jhc - phc[i + 1]) % i == 0) {
                    phc[i] = jhc;
                    usedhc[jhc] = true;
                    break;
                }
            }
        }

        for (int i = 1; i <= n; ++i) {
            cout << phc[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
