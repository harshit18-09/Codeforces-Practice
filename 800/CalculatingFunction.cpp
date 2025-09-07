#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%2 == 0){
            cout<<n/2<<endl;
            break;
        }
        else{
            cout<<-(n+1)/2<<endl;
            break;
        }
    }
}