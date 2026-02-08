#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long xhc, yhc;
        cin >> n >> xhc >> yhc;

        long long allhc = 0;
        long long newammhc = 0;

        for (int i = 0; i < n; i++) {
            long long ammhc;
            cin >> ammhc;

            long long comhc = ammhc / xhc;
            allhc += comhc * yhc;

            long long gain = ammhc - comhc * yhc;  
            newammhc = max(newammhc, gain);
        }

        cout << allhc + newammhc << '\n';
    }

    return 0;
}
