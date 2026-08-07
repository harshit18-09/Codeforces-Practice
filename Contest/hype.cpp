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
        int n;
        cin>>n;
        vector<int> arrhc(n);
        for(int i = 0; i < n; ++i){
            cin>>arrhc[i];
        }

        vector<int> chc;
        vector<int> shc;
        bool p2hc = false, p1hc = false;
        for(int i = 0; i < n; ++i){
            if(chc.empty() || arrhc[i] != chc.back()){
                chc.push_back(arrhc[i]);
                shc.push_back(1);
            } 
            else{
                shc.back()++;
            }
        }

        int lhc = chc.size();
        
        for(int i = 0; i < lhc - 1; ++i){
            if(shc[i] >= 2 && shc[i + 1] >= 2){
                p2hc = true;
                break;
            }
        }

        if(p2hc){
            cout<<lhc + 2<<endl;
            continue;
        }

        for(int i = 0; i < lhc; ++i){
            if(shc[i] >= 2){
                if(i + 1 < lhc){
                    if(i + 2 >= lhc || chc[i + 2] != chc[i]){
                        p1hc = true;
                    }
                }
                if(i - 1 >= 0){
                    if(i - 2 < 0 || chc[i - 2] != chc[i]){
                        p1hc = true;
                    }
                }
            }
        }

        if(p1hc){
            cout<<lhc + 1<<endl;
        } 
        else{
            cout<<lhc<<endl;
        }
    }
    return 0;
}