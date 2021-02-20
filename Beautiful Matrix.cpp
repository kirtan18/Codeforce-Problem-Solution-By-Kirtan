#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
  
     int n;
 
     for(int i=1;i<=5;i++){
     	for(int j=1;j<=5;j++){
     		cin>>n;
 
     		if(n==1){
     			cout<< abs(i-3) + abs(j-3) << endl;
     		}
     	}
     }
	return 0;
 
}
