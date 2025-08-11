#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s>>t;
    string temp = s;
    reverse(temp.begin(), temp.end());
    bool check = (temp == t);
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}