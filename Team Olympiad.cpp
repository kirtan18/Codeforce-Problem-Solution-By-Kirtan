// https://codeforces.com/problemset/problem/490/A#



void solve(){

    int n;cin>>n;
    int x;
 
    vector<int>v[4];

    rep(i,0,n){
        cin >> x;
        v[x].push_back(i+1); 
    }

    int t = min(v[1].size(),min(v[2].size(),v[3].size()));
    cout<<t<<endl;
    for(int i=0;i<t;i++){
        cout<<v[1][i] << " " << v[2][i] << " " <<v[3][i]<<endl;
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
