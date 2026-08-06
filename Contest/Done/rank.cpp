//Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int nhc;
    cin>>nhc;
    
    vector<int> lhc(nhc + 1), rhc(nhc + 1), uhc(nhc + 1), vhc(nhc + 1);
    for(int i = 1; i <= nhc; ++i){
        cin >> lhc[i] >> rhc[i] >> uhc[i] >> vhc[i];
    }
    
    for(int i = nhc; i >= 1; --i){
        int currhc = 1;
        bool posshc = true;
        
        for(int j = 1; j <= i; ++j){
            bool fhc = false;
            
            while(currhc <= nhc){
                bool lefthc = (j >= lhc[currhc] && j <= rhc[currhc]);
                bool righthc = ((i - j + 1) >= uhc[currhc] && (i - j + 1) <= vhc[currhc]);
                
                if (!lefthc && !righthc) {
                    fhc = true;
                    currhc++;
                    break;
                }
                currhc++;
            }
            
            if(!fhc){
                posshc = false;
                break;
            }
        }
        
        if(posshc){
            cout<<i<<endl;
            return;
        }
    }
    
    cout<<0<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int thc;
    cin>>thc;
    while(thc--){
        solve();
    }
    
    return 0;
}