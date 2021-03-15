#include <bits/stdc++.h>
#include <iostream>
#define lli               long long int
#include <utility>
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
  int a,b,c;
  cin>>a>>b>>c;
  
  int ex1 = a+b+c;
  int ex2 = a*b*c;
  int ex3 = a*(b+c);
  int ex4 = (a+b)*c;
  int ex5 = a+b*c;
  int ex6 = a*b+c;
 
  cout<<max(ex1,max(ex2,max(ex3,max(ex4,max(ex5,ex6)))));
 
 
 }
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
 
 
 
  solve();
  
 
return 0;
}
