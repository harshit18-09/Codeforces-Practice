#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int total_area = m * n;
    int domino_area = 2;
    int max_dominoes = total_area / domino_area;
    cout << max_dominoes << endl;
    return 0;
}