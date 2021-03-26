// https://codeforces.com/contest/1506/problem/A

void solve(){
    
    ll n , m , x ;
    cin >> n >> m >> x;
    x--;
 
    ll col = x/n;
    ll row = x%n;
 
    cout<< row * m + col + 1 <<"\n";
 
}
 
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int t; cin>>t;
     while(t--){
      solve();
     } 
return 0;
}
