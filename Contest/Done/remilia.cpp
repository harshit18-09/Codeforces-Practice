// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solhc() {
    int nhc, x1hc, xhc2, khc;
    cin>>nhc>>x1hc>>xhc2>>khc;
    
    int dhc = abs(x1hc - xhc2);
    dhc = min(dhc, nhc - dhc);
    
    if(nhc <= 3){
        cout << dhc << "\n";
    } 
    else{
        cout << dhc + khc << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solhc();
    }
    
    return 0;
}