// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int nhc;
    cin>>nhc;
    vector<int> arrhc(nhc + 1);
    for(int i = 1; i <= nhc; ++i){
        cin>>arrhc[i];
    }
    vector<int> brrhc(nhc + 1);
    for(int i = 1; i <= nhc; ++i){
        cin>>brrhc[i];
    }

    vector<int> lastposhc(nhc + 2, 0);
    vector<int> memhc(nhc + 1, 0);
    int totalhc = 0;

    for(int i = nhc; i >= 1; --i){
        if(arrhc[i] == brrhc[i]){
            int ehc = arrhc[i];
            int jhc = lastposhc[ehc + 1];
            if(jhc == 0){
                memhc[i] = nhc;
            } 
            else if(arrhc[jhc] != brrhc[jhc]){
                memhc[i] = jhc - 1;
            } 
            else{
                memhc[i] = memhc[jhc];
            }
        }

        lastposhc[arrhc[i]] = i;
        lastposhc[brrhc[i]] = i;

        int j = lastposhc[1];
        int ans = 0;
        if (j == 0){
            ans = nhc;
        } 
        else if(arrhc[j] != brrhc[j]){
            ans = j - 1;
        } 
        else{
            ans = memhc[j];
        }

        if(ans >= i){
            totalhc += (ans - i + 1);
        }
    }

    cout<<totalhc<<endl;
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