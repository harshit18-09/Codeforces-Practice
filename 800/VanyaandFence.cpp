#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin>>n>>h;

    vector<int> nums(n);
    int c = 0;
    for(int i=0; i<n; i++){
        cin>>nums[i];
        if(nums[i] > h){
            c++;
        }
    }
    int ans = c*2 + (nums.size()-c);
    cout<<ans<<endl;
}