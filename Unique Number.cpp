#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 
void solve() {
  int x;
  cin >> x;
  vector<int> ans;
  int sum = 0, last = 9;
  while (sum < x && last > 0) {
    ans.push_back(min(x - sum, last));
    sum += last;
    last--;
  }
  if (sum < x) {
    cout << -1 << "\n";
  } else {
    reverse(ans.begin(), ans.end());
    for (int i : ans) {
      cout << i;
    }
    cout << "\n";
  }
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
