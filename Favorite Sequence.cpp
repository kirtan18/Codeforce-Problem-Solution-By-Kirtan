#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
    
    int T;
    cin>>T;
    while(T--){
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
        int j = n-1;
        if(n%2==1){
        for(int i=0;i<n;i++){
           if(i == j){
           	cout<<a[i];
           	break;
           }	
           cout<<a[i]<<" "<<a[j]<<" ";
           j--; 
        }
       }
       else{
       	 for(int i=0;i<n;i++){
           if(i == j-1){
           	cout<<a[i]<<" "<<a[j];
           	break;
           }	
           cout<<a[i]<<" "<<a[j]<<" ";
           j--; 
        }
       }     
       cout<<endl;
    }
    
 
 
	return 0;
 
}
