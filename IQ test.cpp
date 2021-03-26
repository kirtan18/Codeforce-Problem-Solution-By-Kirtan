// https://codeforces.com/problemset/problem/25/A

void solve(){
    int n;
    cin >> n;
    ll a[n];
    int odd = 0;
    int even = 0;
    int OI = 0;
    int EI = 0;
    rep(i,0,n){
        cin >> a[i];
    }
     
    for(int i=0;i<n;i++){
        if(a[i] % 2 != 0){
            odd++;
            // OI = i;
        }
        else{
            even++;
            // EI = i;
        } 
    } 
    
    if(odd == 1){
       for(int i=0;i<n;i++){
         if(a[i] % 2 != 0){
            cout << i+1 <<endl;
            break;
         }
       }
    }
    else if (even == 1){
        for(int i=0;i<n;i++){
         if(a[i] % 2 == 0){
            cout << i+1 <<endl;
            break;
         }
       }
    }

}

 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    // int t; cin>>t;
     // while(t--){
      solve();
     // } 
    return 0;
  }
