#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                  

    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;

        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }

        if(n == 1){
            cout << abs(s - nums[0]) << endl;
            continue;
        }

        int st = abs(s-nums[0]);
        int e = abs(s-nums[n-1]);
        
        int steps = 0;

        if(st < e){
            steps = st;
        }
        else{
            steps = e;
        }

        steps += abs(nums[n-1]-nums[0]);
        cout<<steps<<endl;
    }
    return 0;
}