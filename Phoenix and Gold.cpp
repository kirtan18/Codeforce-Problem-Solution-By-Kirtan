// https://codeforces.com/contest/1515/problem/A



void solve() {
 
    int  n , x;
    cin >> n >> x;
 
    int a[n];
    int sum = 0;
    rep(i,0,n){
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    if(sum == x){
        cout <<"NO" <<"\n";
        return;
    }
    cout <<"YES" <<"\n";
    sum = 0;
    for(int i = 0 ; i < n-1 ; i++){
        
        if(sum + a[i] == x){
            swap(a[i],a[i+1]);
        }
        sum += a[i];
 
    }
    
    for(auto it : a){
        cout << it <<" ";
    }
    cout <<"\n";
 
    
}
