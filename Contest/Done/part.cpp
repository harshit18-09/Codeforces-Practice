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
        string shc;
        cin>>shc;
        if(nhc%2==1){
            cout<<"NO"<<endl;
            continue;
        }
        int countopenhc, countclosehc;
        countopenhc = 0;
        countclosehc = 0;
        for(char c : shc){
            if(c=='('){
                countopenhc++;
            }
            else{
                countclosehc++;
            }
        }
        if(countopenhc==countclosehc){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}