// https://codeforces.com/problemset/problem/450/B




void solve(){
     
     long long mod=1e9+7;
     lli a,b;
     cin >> a >> b ;
     lli n;
     cin >> n;

     lli s[] = {a,b,b-a,-a,-b,a-b};

     cout << (s[(n-1)%6] % mod + mod) % mod;
         
}
