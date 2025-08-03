#include<bits/stdc++.h>
using namespace std;

string convert(string s){
    string ans = "";
    int n = s.length();
    ans+=s[0];
    ans+=to_string(n-2);
    ans+=s[n-1];

    return ans;
}

int main(){
    int n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;

        if(s.length()>10){
            string ans = convert(s);
            cout<<ans<<endl;
            continue;
        }
        else{
            cout<<s<<endl;
        }
    }
}