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
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        string s = arr[0];

        for(int i=1; i<n; i++){
            string front = arr[i]+s;
            string back = s+arr[i];
            if(front < back){
                s = front;
            } else {
                s = back;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}