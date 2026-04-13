// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

void checkhc(){
    int nhc;
    int mhc;
    cin>>nhc>>mhc;
    
    int maxihc = 0;
    int currhc = 0;
    int prev = -1;
    
    for (int i = 0; i < nhc; i++) {
        int ahc;
        cin>>ahc;
        
        if(ahc == prev){
            currhc++;
        } 
        else{
            currhc = 1;
            prev = ahc;
        }
        
        if(currhc > maxihc){
            maxihc = currhc;
        }
    }
    
    if(maxihc >= mhc){
        cout<<"NO"<<endl;
    } 
    else{
        cout<<"YES"<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int thc;
    cin>>thc;
    while(thc--){
        checkhc();
    }
    return 0;
}