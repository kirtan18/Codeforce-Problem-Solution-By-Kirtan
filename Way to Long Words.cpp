#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
 
	int n;
	cin>>n;
    string s; 
	while(n--){   
 
      cin>>s;
      int l = s.length();
 
      if(l > 10){
      	cout<<s[0]<<l-2<<s[l-1]<<endl;
      } 
      else{
      	cout<<s<<endl;
      } 
	}
 
	return 0;
}
