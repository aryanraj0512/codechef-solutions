// Problem: Print 6 divided by 2
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LCPPAS1/problems/LCPPAS130
// Solved on: 2026-09-20T15:49:15.657Z

#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n ;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i < n;i++){
	    cin >> arr[i];
	    
	}
	for(int num : arr){
	    if(num > 10){
	        continue;
	    }
	    cout << num * num << endl;
	}

}
