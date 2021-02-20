/* input:
4
4 3
4 1 2 3
2 7
1 8
4 5
4 1 2 3
3 1
5 3 1

output :
2
1
-1
-1  */



#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<unordered_map>
 
#define longlongint lli
#define longlongchar llc
using namespace std;
const int N = 105;
int arr[N];
 
void solve() {
	int n , k;
	cin >> n >> k;	
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	arr[n + 1] = -1;
	while (k > 0) {
		k--;
		int i = 1;
		while (i <= n) {
			if (arr[i] < arr[i + 1]) {
				arr[i]++;
				break;
			}
			i++;
		}
 
		if (i <= n) {
			if (k == 0) {
				cout << i << endl;
			}
		}
		else {
			cout<<"-1"<<endl;
			return;
		}
	}
}
 
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
 
	int T = 1;
	cin >> T;
	
	while (T--) {
        solve();
    	}
 
	return 0;
 
}
