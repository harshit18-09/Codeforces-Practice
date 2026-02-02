#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long l, a, b;
        cin>>l>>a>>b;
        long long g = gcd(b, l);
        long long target = a%g;
        long long max_idx = l-1;
        long long ans = max_idx - ((max_idx - target + g) % g);
        cout<<ans<<endl;
    }
    return 0;
}