#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int k,q;
        cin>>k>>q;
        vector<int> v(k), queries(q);
        for(int i=0; i<k; i++){
            cin>>v[i];
        }
        for(int i=0; i<q; i++){
            cin>>queries[i];
        }

        for(int i : queries){
            if(i >= v[0]){
                cout<<v[0]-1<<" ";
            }
            else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}