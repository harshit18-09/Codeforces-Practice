// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

const int MAX_NODES = 300005 * 32;
int trie[MAX_NODES][2];
int trie_szhc = 0;

void triehc() {
    trie[0][0] = trie[0][1] = -1;
    trie_szhc = 1;
}

void inserthc(int x) {
    int currhc = 0;
    for (int i = 29; i >= 0; --i) {
        int bithc = (x >> i) & 1;
        if (trie[currhc][bithc] == -1) {
            trie[trie_szhc][0] = trie[trie_szhc][1] = -1;
            trie[currhc][bithc] = trie_szhc++;
        }
        currhc = trie[currhc][bithc];
    }
}

int query(int x) {
    int curr = 0;
    int ans = 0;
    for (int i = 29; i >= 0; --i) {
        int bit = (x >> i) & 1;
        if (trie[curr][1 - bit] != -1) {
            ans |= (1 << i);
            curr = trie[curr][1 - bit];
        } else {
            curr = trie[curr][bit];
        }
    }
    return ans;
}

void solvehc() {
    int n;
    cin >> n;
    
    triehc();
    
    int maxixorhc = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (i > 0) {
            maxixorhc = max(maxixorhc, query(x));
        }
        inserthc(x);
    }
    
    cout<<maxixorhc<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solvehc();
        }
    }
    
    return 0;
}