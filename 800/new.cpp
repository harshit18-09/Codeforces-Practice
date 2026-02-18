#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    auto has2025 = [](const string& str) {
        return str.find("2025") != string::npos;
    };

    auto has2026 = [](const string& str) {
        return str.find("2026") != string::npos;
    };

    if (has2026(s) || !has2025(s)) {
        return 0;
    }

    int mini = 4;
    for (int i = 0; i <= n - 4; ++i) {
        int diff = 0;
        if (s[i] != '2') diff++;
        if (s[i+1] != '0') diff++;
        if (s[i+2] != '2') diff++;
        if (s[i+3] != '6') diff++;
        mini = min(mini, diff);
    }

    int minirem = 4;
    string chars = "0256";
    for (int i = 0; i < n; ++i) {
        char original = s[i];
        for (char c : chars) {
            if (c == original) continue;
            s[i] = c;
            if (!has2025(s)) {
                s[i] = original;
                return 1;
            }
            s[i] = original;
        }
    }

    return min(mini, minirem);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}