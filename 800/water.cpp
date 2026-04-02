#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int ans = 0;
        if (n % 2){
            n--;
            ans += a;
        }
        cout << ans + min (n * a, n / 2 * b) << '\n';
    }
    return 0;
}