// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int nhc;
        cin >> nhc;
        vector<int> arrhc(nhc);
        int maxvalhc = 0;
        for (int i = 0; i < nhc; ++i) {
            cin>>arrhc[i];
            if (arrhc[i] > maxvalhc) maxvalhc = arrhc[i];
        }

        vector<bool> seenhc(nhc + 2, false);
        for (int xhc : arrhc) {
            if (xhc < nhc) seenhc[xhc] = true;
        }
        int M0hc = 0;
        while (seenhc[M0hc]) ++M0hc;
        int anshc;
        if (maxvalhc >= M0hc) {
            int sum_mex = (int)M0hc * (M0hc + 1) / 2 + (int)(nhc - M0hc - 1) * M0hc;
            anshc = (int)nhc * maxvalhc + sum_mex;
        } 
        else {
            int sum_mex = (int)(M0hc - 2) * (M0hc - 1) / 2 + M0hc + (int)(nhc - M0hc) * M0hc;
            anshc = (int)nhc * (M0hc - 1) + sum_mex;
        }
        cout<<anshc<<endl;
    }
    return 0;
}