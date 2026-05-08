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
        vector<int> arr(n);
        int maxi = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            maxi = max(maxi, arr[i]);
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        if(arr[0] > 0) ans++;

        for(int i=1; i<n; i++){
            if(arr[i-1] < i && arr[i] > i){
                ans++;
            }
        }
        ans++;
        cout<<ans<<endl;
    }
    return 0;
}