// Problem: PROBLEM LINK:
// Platform: codechef
// Language: #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
const ll mod=998244353;
const int N=2e5+5;
int n;
ll a[N];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	int t;cin >> t;
	while(t--){
		int n,x;cin >> n >> x;
		cout << n/10*x << '\n';
	}
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DETSCORE?tab=solution
// Solved on: 2026-09-12T15:26:32.137Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--){
	    int X, N;
	    cin >> X >> N;
	    
	   int  Y = X / 10;
	    
	    cout << Y * N << endl;
	    
	}

}
