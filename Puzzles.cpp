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
  int n,m;
  cin>>n>>m;
  int arr[1000];
  for(int i=0;i<m;i++){
  	cin>>arr[i];
  }
  sort(arr,arr+m);
  int least = arr[n-1] - arr[0];
 
  for(int i=1;i<= m-n;i++){
     if(arr[i+n-1] - arr[i] < least){
     	least = arr[i+n-1] - arr[i];
     }
   }
   cout<< least <<endl;
  }
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
 
solve();
 
return 0;
}
