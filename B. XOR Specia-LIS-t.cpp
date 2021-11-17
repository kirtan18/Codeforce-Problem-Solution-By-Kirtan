https://codeforces.com/problemset/problem/1604/B


void solve(){
    lli n;
    cin >> n;

    lli a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(n % 2 == 0){
        cout << "YES" << "\n";
        return;
    }

    bool ok = 0;
    for(int i=1;i<n;i++){
        if(a[i] <= a[i-1]){
            ok = 1;
        }
    }
    if(ok == 1){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }

}  
