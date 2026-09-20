// Problem: Print 6 divided by 2
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LCPPAS1/problems/LCPPAS70
// Solved on: 2026-09-20T15:30:15.734Z

 #include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if( a< b && b < c){
	    cout << "Increasing" << endl;
	}
	else if(a > b && b > c){
	    cout << "Decreasing" << endl;
	}
	else{
	    cout << "Neither" << endl;
	}

}