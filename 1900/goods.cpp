// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

bool isValid(const vector<int>& a, int unique_count) {
    if (a.empty()) return true;
    int blocks = 1;
    for (size_t i = 1; i < a.size(); i++) {
        if (a[i] != a[i-1]) {
            blocks++;
        }
    }
    return blocks == unique_count;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> first_pos, last_pos;
    int unique_count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (first_pos.find(a[i]) == first_pos.end()) {
            first_pos[a[i]] = i;
            unique_count++;
        }
        last_pos[a[i]] = i;
    }
    
    if (isValid(a, unique_count)) {
        cout << "YES\n";
        return;
    }
    
    int L = -1;
    for (int i = 0; i < n - 1; i++) {
        if (last_pos[a[i]] > i && a[i] != a[i+1]) {
            L = i;
            break;
        }
    }
    
    int R = -1;
    for (int i = n - 1; i > 0; i--) {
        if (first_pos[a[i]] < i && a[i] != a[i-1]) {
            R = i;
            break;
        }
    }
    
    if (L == -1 || R == -1) {
        cout << "NO\n";
        return;
    }
    
    set<int> cand_set;
    auto add_cand = [&](int idx) {
        if (idx >= 0 && idx < n) {
            cand_set.insert(idx);
        }
    };
    
    vector<int> important_points = {
        L, R,
        first_pos[a[L]], last_pos[a[L]],
        first_pos[a[R]], last_pos[a[R]]
    };
    
    for (int p : important_points) {
        add_cand(p - 1);
        add_cand(p);
        add_cand(p + 1);
    }
    
    vector<int> cand_vec(cand_set.begin(), cand_set.end());
    
    for (size_t i = 0; i < cand_vec.size(); i++) {
        for (size_t j = i + 1; j < cand_vec.size(); j++) {
            int idx1 = cand_vec[i];
            int idx2 = cand_vec[j];
            
            swap(a[idx1], a[idx2]);
            if (isValid(a, unique_count)) {
                cout << "YES\n";
                return;
            }
            swap(a[idx1], a[idx2]);
        }
    }
    
    cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}