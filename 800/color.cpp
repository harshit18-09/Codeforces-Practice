#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> nums;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            nums.push_back({x,i%2});
        }

        sort(nums.begin(), nums.end());
        bool flag=true;
        for(int i=0; i<n-1; i++){
            if(nums[i].second==nums[i+1].second){
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
    }
    return 0;
}