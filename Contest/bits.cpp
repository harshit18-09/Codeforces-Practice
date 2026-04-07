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
        cin>>n>>khc;
        vector<int> arrhc(n);
        for (int i = 0; i < n; ++i) {
            cin >> arrhc[i];
        }
        int phc;
        cin >> phc; 
        int p0hc = phc - 1; 

        int leftcnthc = (arrhc[0] != arrhc[p0hc]) ? 1 : 0;
        for (int i = 1; i <= p0hc; ++i) {
            if (arrhc[i] != arrhc[i - 1]) leftcnthc++;
        }

        int rightcnthc = (arrhc[n - 1] != arrhc[p0hc]) ? 1 : 0;
        for (int i = p0hc; i < n - 1; ++i) {
            if (arrhc[i] != arrhc[i + 1]) rightcnthc++;
        }

        int anshc = max(leftcnthc, rightcnthc);
        cout<<anshc<<endl;
    }
    return 0;
}