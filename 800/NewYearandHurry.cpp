#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int total = 240-k; 
    int c = 0;
    int i=1;

    while(i <= n){
        int time_for_this_problem = 5 * i;
        
        if(total >= time_for_this_problem){
            total -= time_for_this_problem;
            c++;
            i++;
        } else {
            break; 
        }
    }
    cout<<c<<endl;
}