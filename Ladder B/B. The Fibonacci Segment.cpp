https://codeforces.com/problemset/problem/365/B


void solve(){
    int n;
    cin >> n;
    int a[n+10];
    int b[n+10];
    int ans = 2;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = 2;
    }

    if(n == 1){
        cout << 1 <<"\n";
    }
    else{
        for(int i = 2 ; i < n ; i++){
            if(a[i-1] + a[i-2] == a[i]){
                b[i] = b[i-1] + 1;
                ans  = max(ans,b[i]);
            }
        }
        cout << ans <<"\n";
    }   
}
