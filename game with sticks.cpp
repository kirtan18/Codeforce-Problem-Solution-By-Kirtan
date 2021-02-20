#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
    
    int n , m , i;
    cin >>n >>m;
    if(n > m){
      i = m;
    }
    else{
      i = n;
    }
    if(i % 2 == 0){
       cout<<"Malvika"<<endl;
    }
    else{
    	cout<<"Akshat"<<endl;
    } 
 
	return 0;
 
}
