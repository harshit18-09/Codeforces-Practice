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
        int n, khc;
        cin >> n >> khc;
        vector<int> arrhc(n + 1);
        for (int i = 1; i <= n; ++i) cin >> arrhc[i];
        vector<int> prrhc(khc + 2);
        prrhc[0] = 0;
        for (int i = 1; i <= khc; ++i) cin >> prrhc[i];
        prrhc[khc + 1] = n + 1;

        int xhc = arrhc[prrhc[1]];               
        vector<int> drrhc(n + 2, 0);      
        for (int i = 1; i <= n; ++i){
            drrhc[i] = arrhc[i] ^ xhc;
        }
        drrhc[n + 1] = 0;

        vector<int> brrhc(n + 2);        
        for (int i = 1; i <= n + 1; ++i){
            brrhc[i] = drrhc[i] ^ drrhc[i - 1];
        }

        vector<int> cnthc(khc + 2, 0);      
        int seghc = 1;
        for (int i = 1; i <= n + 1; ++i) {
            while (seghc <= khc + 1 && i > prrhc[seghc]) ++seghc;
            if (brrhc[i] == 1) cnthc[seghc]++;
        }

        int totalhc = 0, maxihc = 0;
        for (int i = 1; i <= khc + 1; ++i) {
            totalhc += cnthc[i];
            maxihc = max(maxihc, cnthc[i]);
        }
        int anshc = max(totalhc / 2, maxihc);
        cout<<anshc<<endl;
    }
    return 0;
}