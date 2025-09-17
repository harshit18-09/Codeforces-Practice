#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++)cin>>b[i];

        cout<<n+m<<endl;
    }
    return 0;
}