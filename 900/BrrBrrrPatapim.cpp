#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> m(n, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>m[i][j];
            }
        }

        vector<int> ans(2*n);
        for(int i=0; i<n; i++){
            ans[1+i] = m[0][i];
        }
        for(int i=1; i<n; i++){
            ans[n+i] = m[n-1][i];
        }
        int sum = 0;
        for(int i=1; i<ans.size(); i++){
            sum += ans[i];
        }
        int total = (2*n*(2*n+1))/2;
        ans[0] = total-sum;

        for(int i : ans) cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}