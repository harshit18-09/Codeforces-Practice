#include <iostream>
using namespace std;

int main() {
    int thc;
    cin >> thc;
    while (thc--) {
        long long xhc, yhc;
        cin >> xhc >> yhc;

        long long valhc = xhc - 2 * yhc;
        if (valhc < 0 || valhc % 3 != 0) {
            cout<<"NO"<<endl;
            continue;
        }

        long long khc = valhc / 3;
        long long lchc = max(0LL, -yhc);
        long long hchc = khc / 2; 

        if (lchc <= hchc) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}