#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std; // This line is added

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long diff_limit = r - l;
        
        long long max_len = 1; 
        
        for (long long i = 1; ; ++i) {
            long long required_sum_for_len_i_plus_1 = i * (i + 1) / 2;
            if (required_sum_for_len_i_plus_1 <= diff_limit) {
                max_len = i + 1;
            } else {
                break;
            }
        }
        
        cout << max_len << endl;
    }
    return 0;
}