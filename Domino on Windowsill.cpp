void solve(){
     int n,k1,k2;
     cin>>n>>k1>>k2;
     int w,b;
     cin>>w>>b;
 
     int a = (k1 + k2)/2;
     
     int y = ((n-k1) + (n-k2))/2;
 
     if(a >= w && y >= b){
      cout<<"YES"<<"\n";
     } else{
      cout<<"NO"<<"\n";
     }
 
     
  }
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int T;cin>>T;
    while(T--){
    solve();
    }
return 0;
}
