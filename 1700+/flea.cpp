// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

int get(int l, int s){
    int p = l/s;
    int r = l%s;
    if(r == 0) return l;
    return r*(p+1);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, s;
    cin>>n>>m>>s;
    int row = get(n, s);
    int col = get(m, s);
    cout<<row*col<<endl;
    return 0;
}