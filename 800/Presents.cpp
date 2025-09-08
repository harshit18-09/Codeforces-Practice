#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];

    vector<int> ans(n);
    for(int i=0; i<n; i++){
        ans[nums[i]-1] = i+1;
    }
    for(int i : ans) cout<<i<<" ";
    cout<<endl;
}