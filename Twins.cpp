#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
 
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;
 
	int count = 0;
	int sum2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
 
	sum = sum / 2;
	sort(arr, arr + n);
 
 
	for (int i = n - 1 ; i >= 0 ; i--) {
		
		sum2 += arr[i];
        count++;
		if (sum2 > sum) {
			break;
		}
	}
 
	cout << count;
 
 
	return 0;
}
