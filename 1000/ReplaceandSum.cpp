#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        vector<pair<int,int>> query(q);
        for(int i=0; i<q; i++){
            cin>>query[i].first>>query[i].second;
        }
        vector<int> final(n);
        final[n-1] = max(a[n-1], b[n-1]);
        for(int i=n-2; i>=0; i--){
            final[i] = max(final[i+1], b[i]);
        }
        vector<int> ans(q);
        for(int i=0; i<q; i++){
            int l = query[i].first-1;
            int r = query[i].second-1;
            for(int j=l; j<=r; j++){
                ans[i] += final[j];
            }
        }
        for(int i=0; i<q; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}