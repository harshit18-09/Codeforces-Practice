// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int nhc, m, x, y;
        cin>>nhc>>m>>x>>y;
        
        vector<int> arrhc(x);
        for(int i = 0; i < x; i++){
            cin>>arrhc[i];
        }
        
        vector<int> brrhc(y);
        for(int i = 0; i < y; i++){
            cin>>brrhc[i];
        }

        int pahc = x - 1;
        int pbhc = y - 1;
        int sum = 0;
        
        int c1hc = 0; 
        int c2hc = 0; 
        int total = 0; 
        int lhc = nhc + m - 1;

        while(pahc >= 0 || pbhc >= 0){
            if(total >= lhc){
                break;
            }
            
            if(pahc >= 0 && pbhc >= 0){
                if(arrhc[pahc] == brrhc[pbhc]){
                    sum += arrhc[pahc];
                    total++;
                    pahc--;
                    pbhc--;
                } 
                else if(arrhc[pahc] > brrhc[pbhc]){
                    if(c1hc < nhc){
                        sum += arrhc[pahc];
                        c1hc++;
                        total++;
                    }
                    pahc--;
                } 
                else{
                    if(c2hc < m){
                        sum += brrhc[pbhc];
                        c2hc++;
                        total++;
                    }
                    pbhc--;
                }
            } 
            else if(pahc >= 0){
                if(c1hc < nhc){
                    sum += arrhc[pahc];
                    c1hc++;
                    total++;
                }
                pahc--;
            } 
            else{
                if(c2hc < m){
                    sum += brrhc[pbhc];
                    c2hc++;
                    total++;
                }
                pbhc--;
            }
        }
        
        cout<<sum<<endl;
    }
    return 0;
}