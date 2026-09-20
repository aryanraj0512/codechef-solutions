// Problem: Print 6 divided by 2
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LCPPAS1/problems/LCPPAS99
// Solved on: 2026-09-20T15:38:45.701Z

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    for(int i=0;i< N ; i++){
        cin >> arr[i];
    }
    cout << arr[0] * arr[2] << endl;
    

    return 0;
}