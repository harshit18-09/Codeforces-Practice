#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    while(T){
        int year;
        cin>>year;

        int squareroot = -1;
        for(int i=1; i<=year; i++){
            long long s = i*i;
            if(s == year){
                squareroot = i;
                break;
            }
        }

        if(year == 0){
            cout<<"0 0"<<endl;
        }
        else if(squareroot == -1){
            cout<<"-1"<<endl;
        }
        else{
            int s = squareroot/2;
            if(squareroot%2 == 0){
                cout<<s-1<<" "<<s+1<<endl;
            }
            else{
                cout<<s<<" "<<s+1<<endl;
            }
        }

        T--;
    }
    return 0;
}