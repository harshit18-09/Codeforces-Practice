#include<bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year) {
    vector<int> digits;
    while (year > 0) {
        digits.push_back(year % 10);
        year /= 10;
    }
    sort(digits.begin(), digits.end());
    for (size_t i = 0; i < digits.size() - 1; ++i) {
        if (digits[i] == digits[i+1]) {
            return false;
        }
    }
    return true;
}


int main() {
    int y;
    std::cin >> y;
    int beautifulYear = y + 1;
    while (!hasDistinctDigits(beautifulYear)) {
        beautifulYear++;
    }
    std::cout << beautifulYear << std::endl;
    return 0;
}