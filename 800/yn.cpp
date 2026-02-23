#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        for(char c : s){
            if(c == 'Y') count++;
            if(count > 1){
                cout<<"NO\n";
                break;
            }
        }
        if(count <= 1) cout<<"YES\n";
    }
    return 0;
}