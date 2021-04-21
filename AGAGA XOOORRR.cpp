// https://codeforces.com/contest/1516/problem/B



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
using namespace std;
const int MAX_CHAR = 26;
const long long mod=1e9+7;;
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
 
void solve(){
   
        int n;
        cin >> n;
        int arr[n];
        int xor_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            xor_sum ^= arr[i];
          
        }
       
        if (xor_sum == 0) {
            cout << "YES" << "\n";
        } else {
            int index1 = 0;
            int index2 = n - 1;
            int p = 0;
            int q = 0;
            while (index1 < n) {
                p ^= arr[index1];
                if (p == xor_sum)
                    break;
                index1++;
            }
            while (index2 >= 0) {
                q ^= arr[index2];
                if (q == xor_sum)
                    break;
                index2--;
            }
          
      
            if (index1 < index2 - 1) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }

   }
 
signed main(){;
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);;
#endif 
   
    int T;
    cin >> T;
    while(T--){
         solve(); 
    }
   
 
    return 0;;
}
 
