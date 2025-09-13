#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        stack<char> st;

        int c = 0;
        bool f = false;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                st.push('(');
                c++;
            }
            else{
                st.pop();
                c--;
            }
            if(st.empty() && c == 0 && i+1 != s.length()){
                cout<<"YES"<<endl;
                f = true;
                break;
            }
        }
        if(!f){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}