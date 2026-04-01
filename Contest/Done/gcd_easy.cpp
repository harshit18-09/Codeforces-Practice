#include <bits/stdc++.h>
using namespace std;

long long gcd(long long ahc, long long bhc) {
    if (bhc == 0) return ahc;
    return gcd(bhc, ahc % bhc);
}

long long get_lcmhc(long long ahc, long long bhc) {
    return (ahc / gcd(ahc, bhc)) * bhc;
}

void solve() {
    int n;
    cin >> n;
    
    vector<long long> arrhc(n);
    for (int i = 0; i < n; i++) {
        cin >> arrhc[i];
    }
    
    vector<long long> brrhc(n);
    for (int i = 0; i < n; i++) {
        cin >> brrhc[i]; 
    }

    int oppshc = 0;
    
    if (gcd(arrhc[0], arrhc[1]) < arrhc[0]) {
        oppshc++;
    }
    
    if (gcd(brrhc[n - 2], brrhc[n - 1]) < brrhc[n - 1]) {
        oppshc++;
    }
    
    for (int i = 1; i < n - 1; i++) {
        long long g1hc = gcd(arrhc[i - 1], arrhc[i]);
        long long g2hc = gcd(arrhc[i], arrhc[i + 1]);
        long long lhc = get_lcmhc(g1hc, g2hc);
        
        if (lhc < arrhc[i]) {
            oppshc++;
        }
    }
    
    cout<<oppshc<<endl;
}

int main() {
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