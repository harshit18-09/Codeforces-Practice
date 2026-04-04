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
        int n = 7;
        int maxihc = LLONG_MIN;
        int sumhc = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            maxihc = max(maxihc, x);
            sumhc += x;
        }
        cout<<2*maxihc-sumhc<<endl;
    }
    return 0;
}