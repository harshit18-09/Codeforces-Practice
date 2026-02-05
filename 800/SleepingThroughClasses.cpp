#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count = 0;
        int i = 0;
        int forced_awake_timer = 0;
        for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            forced_awake_timer = k;
        } else {
            if (forced_awake_timer > 0) {
                forced_awake_timer--;
            } else {
                count++;
            }
        }
    }
        cout << count << "\n";
    }
    return 0;
}