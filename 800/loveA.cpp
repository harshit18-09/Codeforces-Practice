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
    int count = 0;
    for(char c : s){
        if(c == 'a') count++;
    }
    if(count > n/2){
        cout<<n<<endl;
    }
    else{
        cout<<2*count-1<<endl;
    }
    return 0;
}