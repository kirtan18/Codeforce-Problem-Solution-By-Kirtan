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
    cin>>n;
 
    vector<int> h(n) , a(n);
    int number = 0;
    for(int i=0;i<n;i++){
    	cin>> h[i] >> a[i];
        
        for(int j=0;j<i;j++){
        	if(h[i] == a[j]){
        		number++;
        	}
 
        	if(h[j] == a[i]){
        		number++;
        	}
        }
      
    }
     
    cout<<number<<endl;
	return 0;
}
 
