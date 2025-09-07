#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void get_divisors(ll n, vector<ll> &divisors) {
    divisors.clear();
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        vector<ll> divisors;
        get_divisors(b, divisors);
        ll ans = -1;
        for (ll k : divisors) {
            ll new_a = a * k;
            ll new_b = b / k;
            ll sum = new_a + new_b;
            if (sum % 2 == 0) {
                if (sum > ans) {
                    ans = sum;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
