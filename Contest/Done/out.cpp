#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, mhc, h;
        cin >> n >> mhc >> h;
        
        vector<long long> numshc(n);
        for (int i = 0; i < n; i++) {
            cin >> numshc[i];
        }
        
        vector<long long> orihc = numshc;
        int lasthc = -1;
        vector<int> elehc(n, -1);
        
        for (int i = 0; i < mhc; i++) {
            int b;
            long long c;
            cin >> b >> c;
            b--;
            
            if (elehc[b] < lasthc) {
                numshc[b] = orihc[b];
                elehc[b] = i;
            }
            numshc[b] += c;
            elehc[b] = i;
            if (numshc[b] > h) {
                lasthc = i + 1;  
            }
        }
        for (int i = 0; i < n; i++) {
            if (elehc[i] < lasthc) {
                numshc[i] = orihc[i];
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << numshc[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}