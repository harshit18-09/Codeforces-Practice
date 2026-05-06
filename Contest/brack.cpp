// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int nhc;
    cin>>nhc;
    string ahc, bhc;
    cin>>ahc>>bhc;

    int balahc = 0, balbhc = 0;
    
    for (int i = 0; i < nhc; ++i) {
        if (ahc[i] == bhc[i]) {
            if (ahc[i] == '(') {
                balahc++;
                balbhc++;
            } 
            else {
                balahc--;
                balbhc--;
            }
        } 
        else {
            if (balahc < balbhc) {
                balahc++;
                balbhc--;
            } 
            else if (balbhc < balahc) {
                balbhc++;
                balahc--;
            } 
            else {
                balahc++;
                balbhc--;
            }
        }
        
        if (balahc < 0 || balbhc < 0) {
            cout<<"NO"<<endl;
            return;
        }
    }
    
    if (balahc == 0 && balbhc == 0) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}