#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 
void solve() {
 
	int n ;
	cin >> n;
 
	string s;
	cin >> s;
 
	for (int i = 0; i <= 4; i++) {
		if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020") {
			cout << "YES" << endl;
			return;
		}
	}
 
	cout << "NO" << endl;
 
}
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
 
	int T;
	cin >> T;
	while (T--) {
		solve();
 
	}
 
	return 0;
 
}
