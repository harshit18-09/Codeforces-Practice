#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int ans = 0;
    while(n <= m){
        ans++;
        n *= 3;
        m *= 2;
    }

    cout<<ans<<endl;
}