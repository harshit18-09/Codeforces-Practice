// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

long long gcdhc(long long ahc, long long bhc) {
    while (bhc) {
        ahc %= bhc;
        swap(ahc, bhc);
    }
    return ahc;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n, mhc, ahc, bhc;
        cin>>n>>mhc>>ahc>>bhc;
        if(gcdhc(ahc, n) == 1 && gcdhc(bhc, mhc) == 1 && gcdhc(n, mhc) <= 2) {
            cout<<"YES"<<endl;
        } 
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}