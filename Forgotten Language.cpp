// https://www.codechef.com/problems/FRGTNLNG

void solve(){
    
    int n,k;
    cin >> n >>k;
    string s[109];
    vector<string>v[55];
    int l;
    
    rep(i,0,n){
        cin>>s[i];
    }

    for(int i=0;i<k;i++){
        
        cin>>l;
       
        rep(j,0,l){
            string a;
            cin>>a;
            v[i].push_back(a);
        }
    }
    
    for(int i=0;i<n;i++){
        string ans = "NO";
        for(int j=0;j<k;j++){
            for(int k=0;k < v[j].size();k++){
                if(v[j][k] == s[i]){
                    ans = "YES";
                }
            }
        }
        cout<<ans << (i == n-1 ? "\n" : " ");
    }
}

 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int t; cin>>t;
     while(t--){
      solve();
     } 
return 0;
}
