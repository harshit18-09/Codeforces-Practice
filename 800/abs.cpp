// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    
    long long global_max = -1;
    int best_index = -1;
    
    // Step 1: Find the absolute maximum element and its index
    for (int i = 0; i < n; ++i) {
        if (a[i] > global_max) {
            global_max = a[i];
            best_index = i;
        }
        if (b[i] > global_max) {
            global_max = b[i];
            best_index = i;
        }
    }
    
    // Step 2: Calculate the maximum possible sum based on our logic
    long long total_sum = global_max; 
    
    for (int i = 0; i < n; ++i) {
        if (i == best_index) {
            // For the peak index, the other element must go to array b
            total_sum += min(a[i], b[i]);
        } else {
            // For all other indices, take the maximum available element for array b
            total_sum += max(a[i], b[i]);
        }
    }
    
    cout << total_sum << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}