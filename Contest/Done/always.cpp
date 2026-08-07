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
        int nhc;
        cin>>nhc;
        string sthc;
        cin>>sthc;
        
        int cnt0=0, cnt1=0;
        for(char c : sthc){
            if(c == '0') cnt0++;
            else cnt1++;
        }

        int dnhc = cnt0 - cnt1;
        
        if(abs(dnhc) > 2){
            cout<<-1<<endl;
            continue; 
        }

        int khc = 1;
        int c0 = (sthc[0] == '0' ? 1 : 0);
        int c1 = (sthc[0] == '1' ? 1 : 0);
        for(int i = 1; i < nhc; i++){
            if(sthc[i] != sthc[i - 1]){
                khc++;
                if (sthc[i] == '0') c0++;
                else c1++;
            }
        }

        bool flaghc = false; 
        
        for(int i = khc; i >= 1; i--){
            if(i == khc){
                int deltaK = c0 - c1;
                if(abs(dnhc - deltaK) <= 1){
                    cout<<nhc - i<<endl;
                    flaghc = true;
                    break; 
                }
            } 
            else if(i % 2 == 0){
                if(abs(dnhc - 0) <= 1){
                    cout<<nhc - i<<endl;
                    flaghc = true;
                    break;
                }
            } 
            else{
                if(abs(dnhc - 1) <= 1 || abs(dnhc - (-1)) <= 1){
                    cout<<nhc - i<<endl;
                    flaghc = true;
                    break;
                }
            }
        }
        
        if(!flaghc){
            cout<<-1<<endl;
        }
    }
    return 0;
}