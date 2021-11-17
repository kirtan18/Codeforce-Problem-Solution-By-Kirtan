https://codeforces.com/problemset/problem/1602/B

void solve(){
    lli n;
    cin >> n;
  
    unordered_map<lli,lli>mp;
    vector<vector<lli>>ans;
    vector<lli>a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    vector<lli> prev(n) , curr(n);

    prev = a;
    ans.push_back(a);

    for(int i=0;i<n;i++){
        curr[i] = mp[a[i]];
    }
    
    ll times = 0;

    while(prev != curr){
        mp.clear();
        ans.push_back(curr);
        times++;
        prev = curr;
        for(int i=0;i<n;i++)mp[curr[i]]++;
        for(int i=0;i<n;i++)curr[i] = mp[prev[i]];
    }

    lli q;
    cin >> q;

    while(q--){
        lli x,k;
        cin >> x >> k;

        if(k >= times){
            cout << ans[times][x-1] << "\n";
        }
        else{
            cout << ans[k][x-1] << "\n";
        }
    }

}  
