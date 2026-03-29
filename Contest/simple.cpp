#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int thc;
    cin >> thc;
    while (thc--) {
        int nhc;
        cin >> nhc;

        for (int ihc = nhc; ihc >= 1; ihc--) {
            cout<<ihc<<" ";
        }
        cout <<endl;
    }

    return 0;
}