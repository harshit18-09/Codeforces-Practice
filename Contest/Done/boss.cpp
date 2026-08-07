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
        unordered_map<int,int> m;
        unordered_map<int,int> sum;
        int total = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
            total += arr[i];
        }

        int maxi = 0, val = 0;
        for(const auto &i : m){
            if(i.second > maxi){
                maxi = i.second;
                val = i.first;
            }
        }

        int left = n-maxi;
        if(maxi <= left+1) cout<<total<<endl;
        else{
            int ans = total - (maxi - (left+2))*val;
            cout<<ans<<endl;
        }
    }
    return 0;
}