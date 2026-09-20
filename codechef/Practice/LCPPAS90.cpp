// Problem: Print 6 divided by 2
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LCPPAS1/problems/LCPPAS90
// Solved on: 2026-09-20T15:36:54.182Z

#include <iostream>
using namespace std;
int main() {
    int choice;
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "Option 1 selected";
            break;
        case 2:
            cout << "Option 2 selected";
            break;
        case 3:
            cout << "Option 3 selected";
            break;
        default:
            cout << "Invalid choice";
            break;
    }

    return 0;
}