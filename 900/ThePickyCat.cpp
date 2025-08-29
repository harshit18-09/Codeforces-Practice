#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    vector<int> nums(n);
    int a1_abs = 0;
    vector<int> others_abs;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(i == 0){
            a1_abs = abs(nums[i]);
        }
        else{
            others_abs.push_back(abs(nums[i]));
        }
    }
    
    sort(others_abs.begin(), others_abs.end());
    
    int median_pos = (n + 1) / 2;
    int smaller_count = 0;
    for (int x : others_abs) {
        if (x < a1_abs) {
            smaller_count++;
        }
    }
    
    int target_smaller_count = median_pos - 1;
    if (smaller_count >= target_smaller_count) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
}