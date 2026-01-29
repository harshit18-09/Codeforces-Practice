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
        int maxihc = INT_MIN;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            maxihc = max(maxihc, a);
        }
        cout<<maxihc*n<<endl;
    }
    return 0;
}