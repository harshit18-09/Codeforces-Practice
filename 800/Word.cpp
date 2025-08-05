#include<bits/stdc++.h>
using namespace std;

void to_upper(std::string& word) {
    std::transform(word.begin(), word.end(), word.begin(),
        [](unsigned char c) { return std::toupper(c); });
}

void to_lower(std::string& word) {
    std::transform(word.begin(), word.end(), word.begin(),
        [](unsigned char c) { return std::tolower(c); });
}

int main(){
    string s;
    cin>>s;

    int l = 0;
    int u = 0;
    for(char c : s){
        if(islower(c)){
            l++;
        }
        else{
            u++;
        }
    }
    if(l<u){
        to_upper(s);
        cout<<s<<endl;
    }
    else{
        to_lower(s);
        cout<<s<<endl;
    }
}