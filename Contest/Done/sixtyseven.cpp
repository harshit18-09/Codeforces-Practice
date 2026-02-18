#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool foundhc = false;
        for (int i = 0; i < n; i++) {
            int hc;
            cin >> hc;
            if (hc == 67) {
                foundhc = true;
            }
        }

        cout<<(foundhc ? "YES\n" : "NO\n");
    }
    return 0;
}