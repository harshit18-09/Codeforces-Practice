#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, khc;
        cin >> n >> khc;

        vector<string> shc(khc);
        for (int i = 0; i < khc; i++) {
            cin >> shc[i];
        }

        vector<array<bool, 26>> poshc(n);
        for (int i = 0; i < n; i++) {
            poshc[i].fill(false);
            for (int j = 0; j < khc; j++) {
                poshc[i][shc[j][i] - 'a'] = true;
            }
        }

        string hcanshc;
        bool foundhc = false;

        for (int d = 1; d <= n && !foundhc; d++) {
            if (n % d != 0) continue;

            string hcbashc(d, '?');
            bool ok = true;

            for (int i = 0; i < d && ok; i++) {
                array<bool, 26> comshc;
                comshc.fill(true);

                for (int j = i; j < n; j += d) {
                    for (int c = 0; c < 26; c++) {
                        comshc[c] = comshc[c] && poshc[j][c];
                    }
                }

                int choshc = -1;
                for (int c = 0; c < 26; c++) {
                    if (comshc[c]) {
                        choshc = c;
                        break;
                    }
                }

                if (choshc == -1) {
                    ok = false;
                } else {
                    hcbashc[i] = char('a' + choshc);
                }
            }

            if (ok) {
                hcanshc.clear();
                for (int i = 0; i < n / d; i++) {
                    hcanshc += hcbashc;
                }
                foundhc = true;
            }
        }

        cout << hcanshc << '\n';
    }

    return 0;
}
