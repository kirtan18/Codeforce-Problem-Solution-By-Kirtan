// https://codeforces.com/contest/1514/problem/A




void solve(){
    
    lli n;
    cin >> n;
    
    lli a[n];
    lli pro = 1;

    rep(i,0,n){
        cin >> a[i];
        pro *= a[i];
    }

    int flag = 1;

    for(int i = 0 ; i < n ;i++){
        
        long double sq = sqrt(a[i]);
        
        if(int(sq) != sq){
            flag = 0;
        }
    }

    if(flag == 0){
        cout << "YES" <<"\n";
    }else{
        cout <<"NO" <<"\n"; 
    }

    
  }

 
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
    
    int T; cin >> T;    
    while(T--){
       solve();
    }
    return 0;

}

