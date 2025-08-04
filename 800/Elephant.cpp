#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    vector<int> steps = {5,4,3,2,1};
    int i = 0;
    int c = 0;
    while(x > 0){
        if(x >= steps[i]){
            x-=steps[i];
            c++;
        }
        else{
            i++;
        }
    }
    cout<<c<<endl;
}