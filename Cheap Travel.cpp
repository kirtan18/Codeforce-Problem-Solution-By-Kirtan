
void solve(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans = 0;

    if(m*a<=b){
      ans = n*a;
    }
    else{
      ans = (n/m)*b + min((n%m)*a,b);
    } 
    cout<<ans<<endl;
  }

signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
  // int T;cin>>T;
  // while(T--){
    solve();
  // }
return 0;
}
