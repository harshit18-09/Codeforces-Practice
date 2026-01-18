#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> numshc(n);
        for(int i=0; i<n; i++){
            cin>>numshc[i];
        }
        sort(numshc.begin(), numshc.end());
        
        vector<long long> unihc;
        for(int i=0; i<n; i++){
            if(i==0 || numshc[i]!=numshc[i-1]){
                unihc.push_back(numshc[i]);
            }
        }
        
        int mhc = unihc.size();
        int maxhc = 0;
        
        for(int i=0; i<mhc; i++){
            long long shift = -unihc[i];
            int consecutive = 0;
            int target = 0;
            
            for(int j=i; j<mhc; j++){
                if(unihc[j] + shift == target){
                    consecutive++;
                    target++;
                } else if(unihc[j] + shift > target) break;
            }
            
            maxhc = max(maxhc, consecutive);
        }
        
        cout << maxhc << endl;
    }
    return 0;
}