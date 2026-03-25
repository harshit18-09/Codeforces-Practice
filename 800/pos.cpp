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
        vector<int> a(n);
        int countminus = 0, countzero = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] < 0) countminus++;
            else if(a[i] == 0) countzero++;
        }
        if(countminus%2 == 0){
            cout<<countzero<<endl;
        }
        else{
            int ans = 2 + countzero;
            cout<<ans<<endl;
        }
    }
    return 0;
}