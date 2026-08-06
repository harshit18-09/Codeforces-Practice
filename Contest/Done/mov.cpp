// Author: Harshit_1809 
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> ahc(n);
    
    long long mini = 2e18;  
    long long maxi = -2e18; 

    for (int i = 0; i < n; i++){
        cin >> ahc[i];
        if (i % 2 == 0){
            mini = min(mini, ahc[i]);
        } 
        else{
            maxi = max(maxi, ahc[i]);
        }
    }

    if (n % 2 != 0){
        cout << "NO\n";
        return;
    }

    if (mini - maxi >= 2){
        cout<<"YES"<<endl;
    } 
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}