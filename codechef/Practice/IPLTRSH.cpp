// Problem: IPLTRSH
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH?tab=statement
// Solved on: 2026-09-14T15:50:46.800Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;;
    cin >> T;
    while(T--){
        int N , M;
        cin >> N >> M;
        if(N < M){
            cout << 0 <<endl;
        }else{
            cout << N - M << endl;
        }
    }

}
