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
        int n, x, y, z;
        cin>>n>>x>>y>>z;
        int s1 = x+y;
        int t1 = (n+s1-1)/s1;

        int t2;
        if(x * z >= n){
            t2 = (n + x - 1) / x;
        }
        else{
            int rem = n - (x * z);
            int s2 = x + 10 * y;
            t2 = z + (rem + s2 - 1) / s2;
        }

        int ans = min(t1, t2);
        cout<<ans<<endl;
    }
    return 0;
}