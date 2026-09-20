// Problem: MINHEIGHT
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINHEIGHT
// Solved on: 2026-09-20T15:05:15.394Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    while(T--){
        int X , H;
        cin >> X >> H;
        if (X >= H) {
            cout << "Yes" << endl;
        }else{
            cout << " NO" << endl;
        }
    }

}
