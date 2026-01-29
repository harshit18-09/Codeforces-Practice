#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solvehc() {
    int n;
    if (!(cin>>n)) return;
    
    vector<int> hconehc(n);
    for (int i = 0; i < n; ++i) {
        cin>>hconehc[i];
    }

    vector<int> hctwohc = hconehc;
    sort(hctwohc.begin(), hctwohc.end());

    bool sorted = true;
    for (int i = 0; i < n; ++i) {
        if (hconehc[i] != hctwohc[i]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout<<-1<<"\n";
        return;
    }

    int min_val = hctwohc[0];
    int max_val = hctwohc[n - 1];

    long long anshc = 0;
    long long lhc = 1, rhc = 2000000000LL; 

    while (lhc <= rhc) {
        long long kothc = lhc + (rhc - lhc) / 2;
        
        long long lowhc = (long long)max_val - kothc;
        long long uphc = (long long)min_val + kothc;
        
        bool hc = true;
        
        if (lowhc < uphc) {
            for (int i = 0; i < n; ++i) {
                if (hconehc[i] > lowhc && hconehc[i] < uphc) {
                    if (hconehc[i] != hctwohc[i]) {
                        hc = false;
                        break;
                    }
                }
            }
        }
        
        if (hc) {
            anshc = kothc;
            lhc = kothc + 1;
        } else {
            rhc = kothc - 1;
        }
    }

    cout<<anshc<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        solvehc();
    }
    return 0;
}