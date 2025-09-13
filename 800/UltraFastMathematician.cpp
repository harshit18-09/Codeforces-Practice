#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;

    string ans = "";
    for(int i=0; i<s1.length(); i++){
        if(s1[i] == s2[i]) ans += '0';
        else ans += '1';
    }
    cout<<ans<<endl;
    return 0;
}