// Problem: EGGBUY
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/START255D/problems/EGGBUY
// Solved on: 2026-09-09T14:41:23.148Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Y , F;
	cin >> X >> Y >> F ;
 
 int cost1 = X * 12;
 int  cost2 = Y * 12 + F ;
  
  if( cost1 < cost2 ){
      cout << cost1;
  }else{
      cout << cost2;
  }
}
