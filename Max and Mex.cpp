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

  unordered_map<int,int>mp;
  int uni = 0;
  
  // Find max  and cin value

  int ma = INT_MIN;

  for(int i=0;i<n;i++){
     
     int x;cin>>x;
     ma = max(ma,x);
     mp[x]++;
     if(mp[x] == 1){
      uni++;
     }
  }
  
  //find mex 

  int me = INT_MAX;

  for(int i=0;i<n+1;i++){
     if(!mp[i]){
      me = i;
      break;
     }
  }

  // operation

  if(me < ma && k != 0){
    int avg = ((me + ma + 1)/2);
    mp[avg]++;
    if(mp[avg] == 1){
      uni++;
    } 
  }
  else if(me > ma && k != 0){
    uni += k;
  }  
  cout<<uni<<"\n"; 
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
