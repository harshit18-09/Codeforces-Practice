// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin>>n>>m>>k;
    vector<vector<char>> arr(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int maxradius = min(n, m)/2;
    int cnt = 0;
    for(int radius=1; radius<=maxradius; radius++){
        for(int i=radius; i<n-radius; i++){
            for(int j=radius; j<m-radius; j++){
                int count = 0;
                if(arr[i][j] == '*' && arr[i-radius][j] == '*' && arr[i+radius][j] == '*' && arr[i][j-radius] == '*' && arr[i][j+radius] == '*'){
                    cnt++;
                    if(cnt == k){
                        cout<<i+1<<" "<<j+1<<endl;
                        cout<<i-radius+1<<" "<<j+1<<endl;
                        cout<<i+radius+1<<" "<<j+1<<endl;
                        cout<<i+1<<" "<<j-radius+1<<endl;
                        cout<<i+1<<" "<<j+radius+1<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}