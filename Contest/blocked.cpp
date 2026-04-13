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
        int nhc;
        cin>>nhc;
        vector<int> arrhc(nhc);
        for (int i = 0; i < nhc; ++i){
            cin>>arrhc[i];
        }
        
        sort(arrhc.begin(), arrhc.end());
        bool duphc = false;
        for (int i = 1; i < nhc; ++i) {
            if (arrhc[i] == arrhc[i-1]) {
                duphc = true;
                break;
            }
        }
        
        if (duphc) {
            cout<<-1<<endl;
        } 
        else {
            sort(arrhc.rbegin(), arrhc.rend());
            for (int i = 0; i < nhc; ++i) {
                cout<<arrhc[i]<< " \n"[i == nhc-1];
            }
        }
    }
    return 0;
}