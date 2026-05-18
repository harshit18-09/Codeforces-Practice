// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int nhc, ahc, bhc;
        cin>>nhc>>ahc>>bhc;

        int costindihc = nhc * ahc;
        int costcombhc = (nhc / 3) * bhc + (nhc % 3) * ahc;
        int costallhc = ((nhc + 2) / 3) * bhc; 

        int anshc = min(costindihc, min(costcombhc, costallhc));
        cout<<anshc<<endl;
    }
    return 0;
}