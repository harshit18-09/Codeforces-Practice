#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    while(b){
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve(){
    long long a,b,k;
    cin>>a>>b>>k;

    long long d = gcd(a,b);
    long long na = a/d;
    long long nb = b/d;

    if(na <= k && nb <= k){
        cout<<1<<endl;
        return;
    }
    else{
        cout<<2<<endl;
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}