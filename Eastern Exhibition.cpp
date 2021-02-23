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
 
/* first of all if  n = odd then always minimum is 
   1 and if n = even then x cordinate & y cordinate are all 
   not same its always diff so first count x median and then y median
   after then ans  = x * y  then this is ans for require position  */
   
//  median = (n/2 - (n-1)/2) + 1   
 
void solve(){
   ll n; cin>>n;
   int x[n+1];
   int y[n+1];
   rep(i,0,n){
   	 cin>> x[i] >> y[i];
   }
   sort(x,x+n);
   sort(y,y+n);
   if(n % 2 != 0){
   	 cout<< "1\n";
   	 return;
   }
 
   else{
      ll a = x[n/2] - x[(n-1)/2] + 1;
      ll b = y[n/2] - y[(n-1)/2] + 1;
 
      ll ans = a * b;
      cout<<ans<<"\n";
   }
}
 
signed main(){
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
    int T;
    cin>>T;
    while(T--){
    	solve();
    }   
     return 0;
}
 
