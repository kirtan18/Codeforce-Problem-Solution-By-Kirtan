https://codeforces.com/problemset/problem/1520/D

void solve(){
        int n;
        cin >> n;
        lli a[n+1];
        unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i]; 
            mp[a[i] - (i+1)]++;
        } 
        
        lli cnt = 0 ;
        for(auto x : mp){
            lli z = x.second;
            cnt += ((z*(z-1))/2);
        }
        cout << cnt <<"\n";
}
