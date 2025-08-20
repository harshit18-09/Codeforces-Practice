#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ca=0, cd = 0;
    for(char c : s){
        if(c == 'A') ca++;
        else cd++;
    }

    if(ca > cd) cout<<"Anton"<<endl;
    else if(ca == cd) cout<<"Friendship"<<endl;
    else cout<<"Danik"<<endl;
}