// Problem: Print 6 divided by 2
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LCPPAS1/problems/LCPPAS110
// Solved on: 2026-09-20T15:41:45.688Z

 #include <iostream>
using namespace std;

int main() {
	int n ;
	cin >> n;
	
	int factorial = 1;
	int i = 1;
	
	do{
	    factorial *= i;
	    i++;
	}while(i<=n);
    
    cout << factorial << endl;
}
