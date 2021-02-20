#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
    
    int maxvalue = 0;
    int minivalue = 1000;
    int maxindex = 0;
    int minindex =0;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
 
    	if(x > maxvalue){
            maxindex = i;
            maxvalue = x;
    	}
 
    	if(x <= minivalue){
            minindex = i;
            minivalue = x;
    	}
    }
    
    if(maxindex > minindex){
    	cout<<(maxindex-1)+(n-minindex)-1;
    }
    else{
    	cout<<(maxindex-1)+(n-minindex);
    }
 
 
 
	return 0;
 
}
