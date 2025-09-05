#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int groups = 1;
    string prev;
    cin >> prev;
    for (int i = 1; i < n; ++i) {
        string current;
        cin >> current;
        if (current[0] == prev[1]) {
            groups++;
        }
        prev = current;
    }
    cout << groups << endl;
    return 0;
}