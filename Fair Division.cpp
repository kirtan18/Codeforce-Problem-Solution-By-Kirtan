// https://codeforces.com/contest/1472/problem/B




void solve() {
   
    int n;
    cin >> n;

    int sum = 0;
    int cnt[3] = {0};
    
    rep(i,0,n){
        int x;
        cin >> x;
        sum += x;
        cnt[x]++;        
    } 
    
    for(int i = 0 ; i < cnt[1]+1 ; i++){
        for(int j = 0 ; j < cnt[2]+1 ; j++){
            if((i*1 + j*2)*2 == sum){
                cout << "YES" <<"\n";
                return;
            } 
        }
    }
    cout << "NO" <<"\n";

}
