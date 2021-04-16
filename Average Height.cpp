// https://codeforces.com/contest/1509/problem/A


#include <bits/stdc++.h>
#include <iostream>
#include<math.h>
#define lli               long long int
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define vi                vector<long long int>
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
const int MAX_CHAR = 26;

/*
bool palindrome( const string &s){
    int l = 0; 
    int h = s.length()-1;

    while(h > l){
        if(s[l++] != s[h--]){
            return false;
        }
    }
    return true;
}    */

// Find gcd
/* int gcd(lli a, lli b){
    
    if(b == 0){
        return a;
    }

    gcd(b,a%b);
}   */

// max(maxdist / 2, max(a[0] - 0, l - a[n - 1]))

void solve(){
   
   int n;
   cin >> n;

   lli arr[n];
   vi odd,even;

   for(lli i = 0; i < n ; i++){
       cin >> arr[i];
       if(arr[i] & 1){
          odd.push_back(arr[i]);
       }else{
        even.push_back(arr[i]);
       }
   }

   for(auto a : odd){
     cout << a << " ";
   }
   
   for(auto b : even){
    cout << b << " ";
   }
   cout << endl;
   
}
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
    
    int T; cin >> T;    
    while(T--){
       solve();
    }
    return 0;

}
