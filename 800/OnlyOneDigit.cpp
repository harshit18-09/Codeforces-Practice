#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> digits;
        while(n){
            int digit = n%10;
            digits.push_back(digit);
            n /= 10;
        }
        int ans = *min_element(digits.begin(), digits.end());
        cout<<ans<<endl;
    }
}