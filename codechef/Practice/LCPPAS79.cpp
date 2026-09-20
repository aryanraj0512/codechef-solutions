// Problem: Print 6 divided by 2
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LCPPAS1/problems/LCPPAS79
// Solved on: 2026-09-20T15:33:33.744Z

#include <iostream>
using namespace std;

int main() {
  char ch;
  cin >> ch;

  switch(ch) {
    
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    
    cout << "Vowel"<< endl;
    break;
    
    default:
    cout << "Consonant" << endl;
    break;




  }

  return 0;
}