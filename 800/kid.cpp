// Author: Harshit_1809
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<int> arr(t);

    for(int i=0; i<t; i++){
        int a;
        cin>>a;
        if(a<0){
            arr[i] = -a;
        }
        else{
            arr[i] = a;
        }
    }
    sort(arr.begin(), arr.end());
    cout<<arr[0]<<endl;
    return 0;
}