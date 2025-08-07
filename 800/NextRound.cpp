#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];

    int kth = nums[k-1];
    int ans = 0;
    for(int i : nums){
        if(i>=kth && i>0){
            ans++;
        }
    }
    cout<<ans<<endl;
}