#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
 
        string s;
        cin>>s;
        char a[100];
        int j=0;
 
        for(int i=0;i<s.length();i++){
        	if(s[i] != '+'){
        		a[j] = s[i];
        		 j++; 
        	}
        }
 
        sort(a,a+j);
 
        for(int i=0;i<j;i++){
        	if(i == j-1)
        		cout<<a[i];
        	else{
        		cout<<a[i]<<'+';
        	}
        }
    	return 0;
}
