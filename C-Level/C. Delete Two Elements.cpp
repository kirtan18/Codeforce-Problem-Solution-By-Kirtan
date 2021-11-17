https://codeforces.com/problemset/problem/1598/C


void solve(){
    lli n;
    cin >> n;
    lli sum = 0;
    map<lli,lli>mp;
    lli a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
        mp[a[i]]++;
    }

    lli need  = (2*sum)/n;
    lli ans = 0;

    if((2*sum) % n != 0){
        cout << 0 << "\n";
        return;
    }

    for(int i=0;i<n;i++){
        lli req = need - a[i];
        ans += mp[req];
        if(a[i] == req)ans -= 1;
    }
    cout << ans/2 << "\n";
    
}  
