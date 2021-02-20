#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
    //W U B  
    string s;
    cin>>s;
    int flag = 1;
 
    for(int i=0;i<s.size();i++){
    	if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
    		i += 2;
    		if(!flag){
    			cout<<" ";
    		}
    		continue;
    	}
    	else{
    		flag = 0;
    		cout<<s[i];
    	}
    } 
   
 
 
	return 0;
}
 
