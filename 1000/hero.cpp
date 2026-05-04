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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        priority_queue<int> pq;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(a[i] == 0){
                if(!pq.empty()){
                    ans += pq.top();
                    pq.pop();
                }
                else continue;
            }
            else{
                pq.push(a[i]);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}