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
        int n, k  = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n - 1; i++){
            int a = max (arr[i], arr[i + 1]), b = min (arr[i], arr[i + 1]);
            while (b * 2 < a){
                b *= 2;
                k++;
            }
        }
        cout << k << '\n';
    }
    return 0;
}