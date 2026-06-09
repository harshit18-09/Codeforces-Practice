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
        int n;
        cin>>n;
        for(int i=0; i<4*n; i++){
            int bhc = i/n;
            int poshc = i%n;
            int val = (bhc == 2) ? ((poshc+1)%n+1) : (poshc+1);
            cout<<val<<(i == 4*n-1 ? "" : " ");
        }
        cout<<endl;
    }
    return 0;
}