#include<bits/stdc++.h>
#include<iostream>
#define ll long long 
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
using namespace std;


void solve(){
	ll n;
	cin >> n;
	ll h[n];
	rep(i,0,n){
		cin >> h[i];
	}
	
	rep(i,0,n-1){
		if(h[i] >= i){
			h[i+1] = h[i+1] + h[i] - i;
			h[i] = i; 
		}
	}
	rep(i,0,n-1){
		if(h[i] >= h[i+1]){
			cout<<"NO\n";
			return;
		}
	}
	
	cout << "YES\n";
	
}  

/*
void solve(){
	int n;
	cin>>n;
	int h[n];
	rep(i,0,n){
		cin>>h[i];
	}
	ll need =0 ,sum =0;

	rep(i,0,n){
       need += i;
       sum += h[i];
       if(sum < need){
		cout<<"NO\n";
		return;
	 }

	}
 
   cout<<"YES\n";
} */


signed main(){
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	 int T;
	 cin>>T;
	 while(T--) {
	 	solve();
	 }
     return 0;
}