// Author: Harshit_1809
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while (t--){
        int nhc;
        cin >> nhc;
        vector<int> arrhc(nhc);
        for (int i = 0; i < nhc; i++) cin >> arrhc[i];

        auto checkhc = [&](int k) -> bool {
            multiset<int> minshc(arrhc.begin(), arrhc.end());
            for(int thc = k - 1; thc >= 0; thc--){
                auto ithc = minshc.find(thc);
                if(ithc != minshc.end()){
                    minshc.erase(ithc);
                } 
                else{
                    auto it = minshc.upper_bound(2 * thc);
                    if (it == minshc.end()) return false;
                    minshc.erase(it);
                }
            }
            return true;
        };
        
        int s = 0, e = nhc;
        while (s < e){
            int mid = (s + e + 1) / 2;
            if (checkhc(mid)) s = mid;
            else e = mid - 1;
        }
        
        cout<<s<<endl;
    }
    
    return 0;
}