#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long xhc, yhc;
    cin >> xhc >> yhc;

    long long shc = abs(xhc - yhc);
    long long anshc = 0;

    if (shc == 0) {
        anshc = 1;
    } else {
        for (long long i = 1; i * i <= shc; ++i) {
            if (shc % i == 0) {
                anshc++;
                if (i * i != shc) {
                    anshc++;
                }
            }
        }
    }

    anshc %= 676767677;
    cout<<anshc<<endl;

    if (xhc >= yhc) {
        for (long long i = 0; i < xhc; ++i) {
            cout<<1<<(i == xhc - 1 && yhc == 0 ? "" : " ");
        }
        for (long long i = 0; i < yhc; ++i) {
            cout<<-1<<(i == yhc - 1 ? "" : " ");
        }
        cout<<endl;
    } else {
        for (long long i = 0; i < yhc; ++i) {
            cout<<-1<<(i == yhc - 1 && xhc == 0 ? "" : " ");
        }
        for (long long i = 0; i < xhc; ++i) {
            cout<<1<<(i == xhc - 1 ? "" : " ");
        }
        cout<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}