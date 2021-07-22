https://codeforces.com/problemset/problem/432/B


void solve(){
    int n;
    cin >> n;
    map<int ,int>hm;
    int arr[n+10][2];
    
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i][0] >> arr[i][1];
        hm[arr[i][0]]++;
    }

    int match = 2 * (n-1);

    for(int i = 0 ; i < n ; i++){
        int hm_dress = (n-1) + hm[arr[i][1]];
        int aw_dress = match - hm_dress; 
        cout << hm_dress << " " << aw_dress;
        cout << "\n";
    }
     
}

signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
  
    solve();
 
    return 0;
}
