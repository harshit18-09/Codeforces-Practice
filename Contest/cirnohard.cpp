// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void solhc() {
    int ahc;
    int nhc;
    cin>>ahc>>nhc;
    vector<int> dhc(nhc);
    for (int i = 0; i < nhc; ++i) {
        cin>>dhc[i];
    }
    
    string shc = to_string(ahc);
    int Lhc = shc.length();
    int minidhc = dhc[0];
    int maxidhc = dhc[nhc - 1];
    
    vector<int> candhc;
    auto addhc = [&](string s) {
        if (s.empty()) return;
        int valhc = 0;
        for (char c : s) {
            valhc = valhc * 10 + (c - '0');
        }
        candhc.push_back(valhc);
    };
    
    if (Lhc > 1) {
        string s(Lhc - 1, maxidhc + '0');
        addhc(s);
    }
    
    char fhc = '0';
    for (int i : dhc) {
        if (i > 0) {
            fhc = i + '0';
            break;
        }
    }
    if (fhc != '0') {
        string s = "";
        s += fhc;
        s.append(Lhc, minidhc + '0');
        addhc(s);
    } 
    else {
        addhc("0");
    }
    
    string Phc = "";
    for (int i = 0; i <= Lhc; ++i) {
        if (i == Lhc) {
            addhc(Phc);
            break;
        }
        int curhc = shc[i] - '0';
        
        int bestdownhc = -1;
        for (int x : dhc) {
            if (x < curhc) {
                bestdownhc = max(bestdownhc, x);
            }
        }
        if (bestdownhc != -1) {
            string s = Phc;
            s += (bestdownhc + '0');
            s.append(Lhc - i - 1, maxidhc + '0');
            addhc(s);
        }
        
        int bestuphc = -1;
        for (int x : dhc) {
            if (x > curhc) {
                if (bestuphc == -1) bestuphc = x;
                else bestuphc = min(bestuphc, x);
            }
        }
        if (bestuphc != -1) {
            string s = Phc;
            s += (bestuphc + '0');
            s.append(Lhc - i - 1, minidhc + '0');
            addhc(s);
        }
        
        bool foundhc = false;
        for (int x : dhc) {
            if (x == curhc) {
                foundhc = true;
                break;
            }
        }
        if (!foundhc) break;
        Phc += shc[i];
    }
    
    int anshc = -1;
    for (int c : candhc) {
        int diff = (ahc > c) ? (ahc - c) : (c - ahc);
        if (anshc == -1 || diff < anshc) {
            anshc = diff;
        }
    }
    
    cout<<anshc<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solhc();
    }
    return 0;
}