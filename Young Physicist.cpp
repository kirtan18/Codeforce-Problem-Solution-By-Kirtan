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


signed main(){
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
/*    
input1 :
       3
       4 1 7
       -2 4 -1
       1 -5 -3

 output:
       NO , NO ,NO 
input2:
       3
       3 -1 7
       -5 2 -4
       2 -1 -3  
output2 :YES , YES , YES

 */
   int n;cin>>n;
  
  int x,y,z,xsum = 0,ysum =0,zsum =0;
 
  while(n--){
  	cin>>x>>y>>z;
  	xsum += x;
  	ysum += y;
  	zsum += z;
  }
 
  if(xsum ==0 && ysum ==0 && zsum == 0){
  	cout<<"YES"<<endl;
  }else{
  	cout<<"NO"<<endl;
  }

     return 0;
}



