// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string shc;
    cin>>shc;
    
    int nhc = shc.length();
    int totalhc = 0;
    
    for (char chc : shc) {
        if (chc == '1' || chc == '3') {
            totalhc++;
        }
    }
    
    int curr13hc = totalhc;
    int currhc2 = 0;
    int maxihc = curr13hc;
    
    for (char chc : shc) {
        if (chc == '2') {
            currhc2++;
        } else if (chc == '1' || chc == '3') {
            curr13hc--;
        }
        
        maxihc = max(maxihc, currhc2 + curr13hc);
    }
    
    cout<<nhc - maxihc<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}