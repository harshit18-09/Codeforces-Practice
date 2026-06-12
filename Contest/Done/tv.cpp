// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<int> A, B;
int dp[35][35];

int gethc(int i, int j){
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int besthc = abs(A[i] - B[j]);

    if(i + 1 < A.size()){
        besthc = min(besthc, 1 + gethc(i + 1, j));
    }

    if(j + 1 < B.size()){
        besthc = min(besthc, 1 + gethc(i, j + 1));
    }

    return dp[i][j] = besthc;
}

void solve() {
    int a, b, x;
    cin>>a>>b>>x;

    A.clear();
    B.clear();

    while(a > 0){
        A.push_back(a);
        a /= x;
    }
    A.push_back(0);

    while(b > 0){
        B.push_back(b);
        b /= x;
    }
    B.push_back(0);

    memset(dp, -1, sizeof(dp));

    cout<<gethc(0, 0)<<endl;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}