// Problem: Print 6 divided by 2
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LCPPAS1/problems/LCPPAS150
// Solved on: 2026-09-20T15:55:57.601Z


#include <iostream>
using namespace std;


int main() {
    int T;
    cin >> T;
    while(T--){
    int x ;
    cin >> x ;
    if(x % 2 == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
    }   
    return 0;
}