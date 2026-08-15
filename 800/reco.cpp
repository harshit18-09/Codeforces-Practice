// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i != j && abs(arr[i] - arr[j]) <= d){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}