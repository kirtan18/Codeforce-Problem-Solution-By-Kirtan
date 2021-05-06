// https://codeforces.com/contest/1520/problem/B


void solve() {
    
    ll n;
    cin >> n;
    ll ans = 0;

    for(int i = 1 ; i <= 9 ; i++){
        for(ll j = i ; j <= n;){
            ans++;
            j = (j*10)+i; 
        } 
    }
    cout << ans <<"\n";
   
}
