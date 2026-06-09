// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void fillhc(int n, string s, vector<int>& pref, vector<int>& suff){
    for (int i = 0; i < n; i++){
        pref[i + 1] = pref[i];
        if (s[i] == ')') pref[i + 1]++;
    }

    for (int i = n - 1; i >= 0; i--){
        suff[i] = suff[i + 1];
        if (s[i] == '(') suff[i]++;
    }
}

void solve() {
    int nhc, k;
    cin>>nhc>>k;

    string shc;
    cin>>shc;

    vector<int> pref(nhc + 1, 0), suff(nhc + 1, 0);

    fillhc(nhc, shc, pref, suff);

    int besthc = -1, poshc = 0;

    for (int i = 0; i <= nhc; i++){
        int cur = pref[i] + suff[i];
        if (cur > besthc) {
            besthc = cur;
            poshc = i;
        }
    }

    int need = max((long long)0, nhc - k - besthc);

    vector<int> khc(nhc, 0);
    vector<int> lhc, rhc;

    for (int i = 0; i < poshc; i++){
        if (shc[i] == ')') khc[i] = 1;
        else lhc.push_back(i);
    }

    for (int i = poshc; i < nhc; i++){
        if (shc[i] == '(') khc[i] = 1;
        else rhc.push_back(i);
    }

    int take = min(need, (int)lhc.size());

    for (int i = 0; i < take; i++){
        khc[lhc[i]] = 1;
    }

    need -= take;

    for (int i = 0; i < need; i++){
        khc[rhc[i]] = 1;
    }

    string anshc(nhc, '1');

    for (int i = 0; i < nhc; i++){
        if (khc[i]) anshc[i] = '0';
    }

    cout<<anshc<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}