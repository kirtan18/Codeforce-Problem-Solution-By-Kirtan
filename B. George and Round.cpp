https://codeforces.com/problemset/problem/387/B



void solve(){
    int n,m;
    cin >> n >> m;
    int a1[n+10],a2[m+10];
   
    for(int i = 0 ; i < n ; i++){
        cin >> a1[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin >> a2[i];
    }
    sort(a1,a1+n);
    sort(a2,a2+m);
    int pos = m-1;
    int ans = n;
    for(int i = n-1 ; i > -1 and pos >-1; i--){
        if(a1[i] <= a2[pos]){
            pos--;
            ans--;
        } 
    }
    cout << ans <<"\n";
}
