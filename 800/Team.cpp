#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int c = 0;
    int ans = 0;

    for(int i=0; i<n; i++){
        c= 0;
        for(int j=0; j<3; j++){
            int temp;
            cin>>temp;
            if(temp == 1){
                c++;
            }
        }
        if(c >= 2){
            ans++;
        }
    }
    cout<<ans<<endl;
    
}