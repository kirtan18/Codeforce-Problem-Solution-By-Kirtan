https://codeforces.com/problemset/problem/230/B



#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
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
#define limit             1000000
using namespace std;
const int MAX_CHAR = 26;
const long long mod=1e9+7;
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
/*
 int gcd(lli a, lli b){
    
    if(b == 0){
        return a;
    }
 
    gcd(b,a%b);
}   */

lli prime[limit];
void calculate_prime_flag(){
    prime[0] = prime[1] = 1;
    for(lli i = 2 ; i < limit ; i++){
        if(prime[i] == 0){
            for(lli j= i * i ; j < limit ; j += i){
                prime[j] = 1;
            }
        } 
    }    
} 

int perfect_sqr(long long x){
    
    double y = sqrt(x);
    if(y == int(y)){
        return 1;
    }else{
        return 0;
    }

}

 
void solve(){
     
     calculate_prime_flag();
     long long n;
     cin >> n;

     long long x;

     for(int i = 0 ; i < n ; i++){
        cin >> x;

        if(x == 4){
            cout << "YES" << "\n";
        }
        else if(x%2 == 0){
            cout << "NO" <<"\n";
        }
        else if(perfect_sqr(x) == 1 && prime[int(sqrt(x))] == 0){
            cout << "YES" <<"\n";
        }else{
            cout <<"NO" <<"\n";
        }

     }  

   }
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
   
    // int T;
    // cin >> T;
    // while(T--){
         solve(); 
    // }
   
 
    return 0;
}
 
