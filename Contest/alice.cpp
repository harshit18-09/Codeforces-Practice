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
        cin>>nhc;
        vector<int> arrhc(nhc);
        for(int i=0; i<nhc; i++) cin>>arrhc[i]; 
        sort(arrhc.begin(), arrhc.end());
        int ihc=0, anshc =INT_MAX;
        while(ihc < nhc){
            int bahjc = ihc;
            while(bahjc < nhc && arrhc[bahjc] == arrhc[ihc]) bahjc++;
            int curr = max(ihc, nhc-bahjc);
            anshc = min(anshc, curr);
            ihc=bahjc;
        }
        cout<<anshc<<endl;
    }
    return 0;
}