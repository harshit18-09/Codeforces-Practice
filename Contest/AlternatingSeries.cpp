// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         if (n % 2 == 0) {
//             for (int i = 0; i < n; i++) {
//                 if (i % 2 == 0) cout << -1 << " ";
//                 else cout << 2 << " ";
//             }
//         } else {
//             for (int i = 0; i < n; i++) {
//                 if (i % 2 == 0) cout << -1 << " ";
//                 else cout << 3 << " ";
//             }
//         }
//         cout << "\n";
//     }
// }



#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    if(!(cin>>t)) return 0;
    while(t--){
        int n; cin>>n;
        for(int i=1;i<=n;i++){
            if(i%2==1) cout << -1;
            else{
                if(i==n) cout << 2;
                else cout << 3;
            }
            if(i<n) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
