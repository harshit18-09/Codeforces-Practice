#include <bits/stdc++.h>
using namespace std;

pair<int, int> gethc(int z, int o, int c) {
    if(z == 0 && o == 0) return {0, 0};
    
    if(c == 0){
        if(z == 0) return {1e9, -1e9};
        
        int maxi = (z > o) ? (2 * o + 1) : (2 * z);
        int mini = (z + o) - maxi;
        
        int min_blocks = (o > 0) ? 2 : 1;
        int max_m = (z + o) - min_blocks;
        
        return {mini, max_m};
    } 
    else {
        if (o == 0) return {1e9, -1e9};
        
        int max_blocks = (o > z) ? (2 * z + 1) : (2 * o);
        int min_m = (z + o) - max_blocks;
        
        int min_blocks = (z > 0) ? 2 : 1;
        int max_m = (z + o) - min_blocks;
        
        return {min_m, max_m};
    }
}

string solve(int z, int o, int k) {
    string res = "";
    int last_c = -1;
    int n = z + o;
    
    for (int i = 0; i < n; ++i) {
        bool placed = false;
        
        if (z > 0) {
            int cost = (last_c == 0) ? 1 : 0;
            int k_needed = k - cost;
            
            pair<int, int> bounds = gethc(z, o, 0);
            
            if (bounds.first <= k_needed && k_needed <= bounds.second) {
                res += '0';
                z--;
                k -= cost;
                last_c = 0;
                placed = true;
            }
        }
        
        if (!placed && o > 0) {
            int cost = (last_c == 1) ? 1 : 0;
            int k_needed = k - cost;
            
            pair<int, int> bounds = gethc(z, o, 1);
            
            if (bounds.first <= k_needed && k_needed <= bounds.second) {
                res += '1';
                o--;
                k -= cost;
                last_c = 1;
                placed = true;
            }
        }
        
        if (!placed) return "";
    }
    
    if (k == 0) return res;
    return "";
}

void solve() {
    int n, k;
    cin>>n>>k;
    
    int z1 = n / 2;
    int o1 = n - z1;
    
    string ans = solve(z1, o1, k);
    if (ans != "") {
        cout << ans << "\n";
        return;
    }
    
    if (z1 != o1) {
        ans = solve(o1, z1, k);
        if (ans != "") {
            cout << ans << "\n";
            return;
        }
    }
    
    cout<<"-1"<<endl;
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