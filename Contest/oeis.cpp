// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

const int MAXPhc = 150000;
vector<long long> isprimeshc;
bool is_prime[MAXPhc + 1];

void sievehc() {
    fill(is_prime + 0, is_prime + MAXPhc + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int phc = 2; phc * phc <= MAXPhc; phc++) {
        if (is_prime[phc]) {
            for (int i = phc * phc; i <= MAXPhc; i += phc)
                is_prime[i] = false;
        }
    }
    for (int phc = 2; phc <= MAXPhc; phc++) {
        if (is_prime[phc]) {
            isprimeshc.push_back(phc);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    
    vector<long long> arrhc(n);
    
    arrhc[0] = isprimeshc[0];
    for (int i = 1; i < n; i++) {
        arrhc[i] = isprimeshc[i - 1] * isprimeshc[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << arrhc[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sievehc();
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}