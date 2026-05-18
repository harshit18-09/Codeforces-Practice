// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int ahc;
    int nhc, d1hc, d2hc;
    cin>>ahc>>nhc>>d1hc>>d2hc;
    
    string shc = to_string(ahc);
    int Lhc = shc.length();
    
    vector<string> candshc;
    
    if(Lhc > 1){
        candshc.push_back(string(Lhc - 1, d2hc + '0'));
        if (d1hc != 0) candshc.push_back(string(Lhc - 1, d1hc + '0'));
    } 
    else{
        candshc.push_back(to_string(d1hc));
        candshc.push_back(to_string(d2hc));
    }
    
    if(d1hc != 0){
        candshc.push_back(string(Lhc + 1, d1hc + '0'));
    }
    else {
        string temp(Lhc + 1, '0');
        temp[0] = d2hc + '0';
        candshc.push_back(temp);
    }
    candshc.push_back(string(Lhc + 1, d2hc + '0'));
    
    for (int i = 0; i < Lhc; ++i) {
        bool prefokhc = true;
        for (int j = 0; j < i; ++j) {
            if (shc[j] - '0' != d1hc && shc[j] - '0' != d2hc) {
                prefokhc = false;
                break;
            }
        }
        if (!prefokhc) break;
        
        string bashc = shc.substr(0, i);
        char c1hc = d1hc + '0';
        char c2hc = d2hc + '0';
        
        candshc.push_back(bashc + c1hc + string(Lhc - i - 1, c1hc));
        candshc.push_back(bashc + c2hc + string(Lhc - i - 1, c2hc));
        candshc.push_back(bashc + c1hc + string(Lhc - i - 1, c2hc));
        candshc.push_back(bashc + c2hc + string(Lhc - i - 1, c1hc));
    }
    
    bool allokhc = true;
    for(char c : shc) {
        if(c - '0' != d1hc && c - '0' != d2hc) { 
            allokhc = false; 
            break; 
        }
    }
    if(allokhc) candshc.push_back(shc);
    
    int anshc = -1;
    
    for (const string& i : candshc) {
        if (i.empty()) continue;
        int val;
        try {
            val = stoll(i);
        } catch (...) {
            continue; 
        }
        
        string checkshc = to_string(val);
        bool okhc = true;
        for (char c : checkshc) {
            if (c - '0' != d1hc && c - '0' != d2hc) {
                okhc = false; 
                break;
            }
        }
        if (okhc) {
            int diff = (ahc > val) ? (ahc - val) : (val - ahc);
            if (anshc == -1 || diff < anshc) {
                anshc = diff;
            }
        }
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