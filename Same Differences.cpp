// https://codeforces.com/contest/1520/problem/D




void solve() {
    
    ll n;
    cin >> n;
    ll a[n];
    unordered_map<int,int>mp;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mp[a[i] - (i+1)]++;
    }

    ll ans = 0;
    
    for(auto x : mp){
        ll z = x.second;
        ans += ((z*(z-1))/2);
    }
    cout << ans << "\n";
    
}
