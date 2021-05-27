// https://codeforces.com/contest/1472/problem/C





 
void solve() {
   
    int n;
    cin >> n;
    vector<int>a(n);

    rep(i,0,n){
        cin >> a[i];
    }
    
    int maxi = 0;
    for(int i = n-1 ; i>=0 ; i--){
        int total = 0;
        total += a[i];

        if((i + a[i]) < n){
            total += a[i + a[i]]; 
        }
        a[i] = total;
        maxi = max(maxi , a[i]);
    }

    cout << maxi <<"\n";
}
