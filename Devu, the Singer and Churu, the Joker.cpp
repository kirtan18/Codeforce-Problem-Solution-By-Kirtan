// https://codeforces.com/problemset/problem/439/A

void solve(){
  
   int n , d;
   cin >> n >> d;

   int arr[n]; 
   int tot = 0;

    rep(i,0,n){
      cin>>arr[i];
      tot += arr[i];
    }
    
    int betn = (n-1)*10;

    if(tot + betn > d) cout<< -1;

    else{

        cout<< (d-tot)/5 << endl;
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
