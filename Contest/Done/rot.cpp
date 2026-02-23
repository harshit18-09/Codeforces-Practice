#include<bits/stdc++.h>
using namespace std;

int calc(string shc){
    int counthc = 1;
    for(int i=1; i<shc.size(); i++){
        if(shc[i] != shc[i-1]) counthc++;
    }
    return counthc;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int nhc;
        cin>>nhc;
        string shc;
        cin>>shc;

        int maxihc = 0;
        for(int i=0; i<nhc; i++){
            char lasthc = shc.back();
            shc.pop_back();
            shc = lasthc + shc;
            int currhc = calc(shc);
            maxihc = max(maxihc, currhc);
        }
        cout<<maxihc<<endl;
    }
    return 0;
}