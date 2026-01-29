#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int nhc;
        cin >> nhc;
        string s;
        cin >> s;

        int oneshc = 0;
        for (char chc : s) if (chc == '1') oneshc++;

        int addhc = 0;
        int i = 0;

        while (i < nhc) {
            if (s[i] == '1') {
                i++;
                continue;
            }

            int j = i;
            while (j < nhc && s[j] == '0') j++;

            int lenyhc = j - i;
            bool lefthc = (i > 0 && s[i - 1] == '1');
            bool righthc = (j < nhc && s[j] == '1');

            if (lefthc) lenyhc--;
            if (righthc) lenyhc--;

            if (lenyhc > 0) {
                addhc += (lenyhc + 2) / 3; 
            }

            i = j;
        }

        cout << oneshc + addhc << "\n";
    }

    return 0;
}
