#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
    
    int n,p;
    cin>>n;
    vector<int>f(n+1);
 
    for(int i=1;i<=n;i++){
    	cin>>p;
    	f[p] = i;
    }
    cout<<f[1];
 
    for(int i=2;i<=n;i++){
    	cout<<" "<<f[i];
    }
    cout<<endl;
 
	return 0;
 
}
