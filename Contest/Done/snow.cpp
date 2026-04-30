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
        vector<int> ahc, bhc, chc, dhc;
        for(int i=0; i<nhc; i++){
            int xhc;
            cin>>xhc;
            if(xhc%6==0){
                ahc.push_back(xhc);
            }
            else if(xhc%2==0){
                bhc.push_back(xhc);
            }
            else if(xhc%3==0){
                chc.push_back(xhc);
            }
            else{
                dhc.push_back(xhc);
            }
        }

        for(int ihc : ahc) cout<<ihc<<" ";
        for(int ihc : bhc) cout<<ihc<<" ";
        for(int ihc : dhc) cout<<ihc<<" ";
        for(int ihc : chc) cout<<ihc<<" ";
        cout<<endl;
    }
    return 0;
}