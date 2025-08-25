#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool check = true;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a == 1){
            check = false;
        }
    }

    if(check){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
}