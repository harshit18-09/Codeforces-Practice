// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, khc;
        cin>>n>>khc;
        int sumhc = 0;
        for (int i = 0; i < n; ++i) {
            int xhc;
            cin >> xhc;
            sumhc += xhc;
        }
        if ((n * khc) % 2 == 0 || sumhc % 2 == 1) {
            cout<<"YES"<<endl;
        } 
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}