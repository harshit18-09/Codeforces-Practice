#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s;
    for(int i=0; i<4; i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    int n = s.size();
    cout<<4-n<<endl;

    return 0;
}