// Problem: Print 6 divided by 2
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LCPPAS1/problems/LCPPAS119
// Solved on: 2026-09-20T15:44:28.894Z

#include <iostream>
using namespace std;

int main() {
   int N;
   cin >> N;
   int sum = 0;
   for(int i = 1; i <= N; i++){
       sum+=i;
   }
   cout << sum << endl;
    return 0;
}