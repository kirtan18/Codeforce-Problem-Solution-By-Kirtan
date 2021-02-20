#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
   //hello
    string s;
    string b = "hello";
    cin>>s;
    int j = 0 , pas = 0;
 
    for(int i=0;i<s.size();i++){
    	if(s[i] == b[j]){
    		j++;
    		pas++;
 
    		if(pas == 5){
    		break;
    	   }
    	}   	
    }
  
    if(pas == 5){
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }
 
      
 
	return 0;
}
