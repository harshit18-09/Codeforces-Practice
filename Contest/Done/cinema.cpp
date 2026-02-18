#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solhc() {
    int nhc;
    cin>>nhc;
    vector<ll> arrhc(nhc);
    for (int i = 0; i < nhc; ++i) {
        cin>>arrhc[i];
    }

    ll totalhc = (arrhc[0] + arrhc[nhc - 1]) / (nhc - 1);
    
    vector<ll> numshc(nhc);
    ll prehc = 0;

    for (int i = 0; i < nhc - 1; ++i) {
        ll diffhc = arrhc[i+1] - arrhc[i];
        ll currhc = (diffhc + totalhc) / 2;
        numshc[i] = currhc - prehc;
        prehc = currhc;
    }
    numshc[nhc - 1] = totalhc - prehc;

    for (int i = 0; i < nhc; ++i) {
        cout<<numshc[i]<<(i == nhc - 1 ? "" : " ");
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solhc();
        }
    }
    return 0;
}