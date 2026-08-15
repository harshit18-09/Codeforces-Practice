// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    string ans = "";
    for(int i=0; i<n; i++){
        if(s[i] == '.'){
            ans += '0';
        }
        else if(s[i] == '-'){
            if(i+1 < n && s[i+1] == '.'){
                ans += '1';
                i++;
            }
            else if(i+1 < n && s[i+1] == '-'){
                ans += '2';
                i++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}