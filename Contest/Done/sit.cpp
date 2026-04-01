#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int nhc;
        cin >> nhc;
        int anshc = 0;
        for (int i = 1; i <= nhc; ++i) {
            int phc;
            cin >> phc;
            if (phc <= i) ++anshc;
        }
        cout<<anshc<<endl;
    }
    return 0;
}