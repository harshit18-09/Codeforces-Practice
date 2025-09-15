#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int k,x;
        cin>>k>>x;

        for(int i=0; i<k; i++){
            if((x-1)%3 == 0 && (x-1)/3 > 0){
                int y = (x-1)/3;
                if(y%2 != 0){
                    x = y;
                    continue;
                }
            }
            x = 2*x;
        }

        cout<<x<<endl;
    }
}