#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;

    int ct = 0;
    for(char c : n){
        if(c == '4' || c == '7'){
            ct++;
        }
    }

    if(ct == 4 || ct == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}