#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int> a(n);
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        if(sum == s){
            cout<<"YES"<<endl;
            continue;
        }

        if(s-sum > 0){
            if((s-sum)%x == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}