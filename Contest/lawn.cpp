#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, w;
        cin>>n>>w;
        if(w == 1){
            cout<<0<<endl;
            continue;
        }
        else{
            int anshc = n - ceil(n/w);
            cout<<anshc<<endl;
        }

    }
    return 0;
}