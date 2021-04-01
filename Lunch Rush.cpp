// https://codeforces.com/problemset/problem/276/A


void solve(){
   
       int n , k;
       cin >> n >> k;
       int f , t;
       int mx = -1000000000;
        
       rep(i,0,n){
        cin >> f >> t;
         
         if(t <= k){
            mx = max(mx,f);
         }
         else{
           mx = max(mx,f-(t-k));
         }

       } 

       
      cout << mx  <<endl;
     
}

 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
    
    // int T; cin >> T;    
    // while(T--){
       solve();
    // }
    return 0;

}
