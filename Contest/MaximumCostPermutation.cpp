#include <bits/stdc++.h>
using namespace std;

int findCost(vector<int>& arr) {
    int n = arr.size();
    int left = 0;
    while (left < n-1 && arr[left] <= arr[left+1]) left++;
    if (left == n-1) return 0;
    int right = n-1;
    while (right > 0 && arr[right] >= arr[right-1]) right--;
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = left; i <= right; i++) {
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
    }
    while (left > 0 && arr[left-1] > min_val) left--;
    while (right < n-1 && arr[right+1] < max_val) right++;
    return right - left + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        set<int> s;
        for (int i = 1; i <= n; i++) {
            s.insert(i);
        }
        for (int x : p) {
            if (x != 0) {
                s.erase(x);
            }
        }
        vector<int> a;
        for (int x : p) {
            if (x == 0) {
                a.push_back(x);
            }
        }
        auto it = s.end();
        for (int i = 0; i < a.size(); i++) {
            it--;
            a[i] = *it;
        }
        vector<int> q = p;
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (q[i] == 0) {
                q[i] = a[j++];
            }
        }
        cout << findCost(q) << endl;
    }
    return 0;
}