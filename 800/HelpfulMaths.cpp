#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stringstream ss(s);
    string segment;
    vector<int> nums;
    while(getline(ss, segment, '+')) {
        nums.push_back(stoi(segment));
    }

    sort(nums.begin(), nums.end());

    string ans = "";
    for(size_t i = 0; i < nums.size(); ++i) {
        ans += to_string(nums[i]);
        if (i < nums.size() - 1) {
            ans += '+';
        }
    }
    cout << ans << endl;
    
    return 0;
}