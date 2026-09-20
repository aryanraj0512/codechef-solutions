// Problem: Print 6 divided by 2
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LCPPAS1/problems/LCPPAS139
// Solved on: 2026-09-20T15:52:00.103Z

#include <bits/stdc++.h>
using namespace std;

int calculatePower(int base, int exponent) {
    return round(pow(base, exponent));
    
}

int main() {
    int base, exponent;
    cin >> base >> exponent;
    int result = calculatePower(base, exponent);
    cout << result;

    return 0;
}