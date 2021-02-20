#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<unordered_map>
 
#define longlongint lli
#define longlongchar llc
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
   
    int T;
    cin>>T;
    while(T--){
    	int x,y;
    	cin>>x>>y;
    	string s;
    	cin>>s;
        unordered_map<char ,int>freq;
        for(char i:s){
        	freq[i]++;
        }
 
        bool ans = 0;
 
        if(x >= 0 && y >= 0){
           if(freq['R'] >= x && freq['U'] >= y){
           	ans = 1;
           }
        }
        else if(x >= 0){
           if(freq['R'] >= x && freq['D'] >= abs(y)){
           	ans = 1;
           }
        }
        else if(y >= 0){
          if(freq['L'] >= abs(x) && freq['U'] >= y ){
          	ans =1;
          }
        }
        else{
          if(freq['L'] >= abs(x) && freq['D'] >= abs(y)){
          	ans = 1;
          }
        }
 
        if(ans){
        	cout<<"YES"<<endl;
        }
        else{
        	cout<<"NO"<<endl;
        }
 
    }
	return 0;
        
 
}
