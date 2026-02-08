#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, h, l;
        cin>>n>>h>>l;
        int rowcount = 0, colcount = 0, cant = 0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(a<=h) rowcount++;
            if(a<=l) colcount++;
            if (a <= h || a <= l) cant++;
        }
        int ans = min({rowcount, colcount, cant / 2}); 
        cout<<ans<<endl;
    }
    return 0;
}