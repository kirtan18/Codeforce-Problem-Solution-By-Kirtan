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
  
  int n , k;
  cin >> n >> k;

  string s; cin >> s;

  if(2*k+1 > n){
    cout<<"NO\n";
    return;
  }

  string a = "";
  string b = "";

  for(int i=0;i<k;i++){
    a += s[i];
  }

  for(int i = n-1 ; i >= n-k ;i--){
    b += s[i];
  }

  if(a == b){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
 }

signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
  int T;cin>>T;
  while(T--){
    solve();
  }
return 0;
}
