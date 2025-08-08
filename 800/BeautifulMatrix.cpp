#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> mat(5, vector<int>(5));
    int it = 0, jt = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>mat[i][j];
            int temp = mat[i][j];
            if(temp == 1){
                it = i;
                jt = j;
            }
        }
    }

    int ans = 0;
    ans += abs(it-2);
    ans += abs(jt-2);
    cout<<ans<<endl;
}