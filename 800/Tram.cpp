#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int maxi=0, curr = 0;
    for(int i=0; i<n; i++){
        int entry, exit;
        cin>>exit>>entry;

        curr -= exit;
        curr += entry;

        maxi = max(maxi, curr);
    }

    cout<<maxi<<endl;
}