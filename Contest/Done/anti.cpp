#include <bits/stdc++.h>
using namespace std;

void solve() {
    int nhc;
    cin >> nhc;
    
    vector<int> arrhc(nhc);
    for (int i = 0; i < nhc; ++i) {
        cin >> arrhc[i];
    }
    
    if (nhc == 1) {
        cout << 1 <<endl;
        return;
    } 
    else {
        for (int i = 0; i < nhc; ++i) {
            cout << 2 << (i == nhc - 1 ? "" : " ");
        }
        cout <<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}