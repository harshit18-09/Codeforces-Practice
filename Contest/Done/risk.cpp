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
        int nhc, m;
        cin>>nhc>>m;
        
        vector<int> arr(nhc);
        for(int i = 0; i < nhc; i++){
            cin>>arr[i];
        }

        vector<int> brr(nhc * m);
        for(int i = 0; i < nhc * m; i++){
            cin>>brr[i];
        }

        for(int i = 0; i < nhc; i++){
            sort(brr.begin() + i * m, brr.begin() + (i + 1) * m, greater<int>());
        }

        int anshc = m;
        
        vector<int> tophc;
        vector<int> ntophc;
        tophc.reserve(m);
        ntophc.reserve(m);

        for(int i = nhc - 1; i >= 0; --i){
            ntophc.clear();
            int p1 = 0, p2 = 0;
            int shc1 = tophc.size();
            
            while(ntophc.size() < m && (p1 < shc1 || p2 < m)){
                if(p1 < shc1 && (p2 == m || tophc[p1] >= brr[i * m + p2])){
                    ntophc.push_back(tophc[p1++]);
                } 
                else{
                    ntophc.push_back(brr[i * m + p2++]);
                }
            }
            
            tophc.swap(ntophc);

            int currsumhc = 0;
            
            int limit = min((int)tophc.size(), anshc - 1);
            for(int j = 0; j < limit; ++j){
                currsumhc += tophc[j];
                if(currsumhc >= arr[i]){
                    anshc = j + 1; 
                    break;
                }
            }
        }

        cout<<anshc<<endl;
    }
    return 0;
}