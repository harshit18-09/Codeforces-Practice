// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int nhc;
    cin>>nhc;
    
    int khc = 0;
    int scounthc = 0;
    int sumhc = 0;
    int caphc = 0;
    int singhc = 0;

    for (int i = 0; i < nhc; ++i){
        int chc;
        cin>>chc;
        if(chc == 1){
            khc++;
        }
        else{
            scounthc++;
            sumhc += chc;
            singhc = chc;
            caphc += (chc - 2) / 2;
        }
    }

    int anshc = 0;
    
    if(scounthc == 0){
        anshc = 0;
    } 
    else if(scounthc == 1){
        int cap = singhc / 2;
        anshc = sumhc + min(khc, cap);
    } 
    else{
        anshc = sumhc + min(khc, caphc);
    }

    if(anshc < 3){
        cout<<0<<endl;
    } 
    else{
        cout<<anshc<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}