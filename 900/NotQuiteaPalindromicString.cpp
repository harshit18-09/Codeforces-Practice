#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int n0 = 0 , n1 = 0;
        for(char c : s){
            if(c == '0') n0++;
            else n1++;
        } 

        int mini = abs(n1-n0)/2;
        int maxi = (n1/2) + (n0/2);
        if (k >= mini && k <= maxi && (k - mini) % 2 == 0) {
        cout << "YES"<<endl;
        } 
        else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}