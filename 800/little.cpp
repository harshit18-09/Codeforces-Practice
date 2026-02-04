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
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }

        for(int i=0; i<2000; i++){
            int curr = s.size();
            if(s.count(curr)){
                cout<<curr<<endl;
                break;
            }
            s.insert(curr);
        }
    }
    return 0;
}