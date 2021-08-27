https://codeforces.com/problemset/problem/1557/B

///////////////////////////////////////////////////////// First method //////////////////////////////////////////////////////////

void solve(){
    
    int n,k;
    cin >> n >> k;
    vector<int>arr(n),srr(n);
    map<int,int>mp;

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        srr[i] = arr[i];
    }
    sort(srr.begin(),srr.end());

    for(int i = 0 ; i < n ; i++){
        mp[srr[i]] = i;
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(mp[arr[i]] > 0 && i > 0 && srr[mp[arr[i]]-1] == arr[i-1]){
            continue;
        }
        else{
            cnt++;
        }
    }
    if(cnt <= k)cout << "YES" <<"\n";
    else cout << "NO" <<"\n";
}


/////////////////////////////////////////////////////////// Second Method ///////////////////////////////////////////////////////

void solve(){
    
    int n,k;
    cin >> n >> k;
    vector<int>a(n),b(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(),b.end());
    int cnt =0;

    for(int i = 0 ; i < n-1 ; i++){
        cnt++;
        int it = upper_bound(b.begin(),b.end(),a[i]) - b.begin();
        while(it<n && i<n-1 && a[i+1] == b[it]){
            i++;
            it++;
        }
    }

    if(n>=2){
        int it = upper_bound(b.begin(),b.end(),a[n-2])-b.begin();
        if(a[n-1] != b[it])cnt++;
    }
    
    if(cnt <= k)cout << "YES" <<"\n";
    else{
        cout << "NO" <<"\n";
    }
}

