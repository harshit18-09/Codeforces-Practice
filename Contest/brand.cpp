// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

class Tatar{
private:
    int nhc;
    int k;
    map<int, int, greater<int>> mhc;

public:
    Tatar() {
        cin>>nhc>>k;
        for(int i = 0; i < nhc; ++i){
            int x;
            cin>>x;
            mhc[x]++;
        }
    }

    void get(){
        set<int> s;
        bool flaghc = false;

        for (const auto& i : mhc){
            bool canhc = false;
            
            if(!s.empty()){
                int closehc = *s.begin();
                if(closehc <= i.first + k){
                    canhc = true;
                }
            }

            bool ishc;
            if(canhc){
                ishc = true;
            } 
            else{
                ishc = (i.second % 2 == 0);
            }

            if(!ishc){
                s.insert(i.first);
            } 
            else{
                flaghc = true; 
            }
        }

        if(flaghc){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        Tatar obj;
        obj.get();
    }
    return 0;
}