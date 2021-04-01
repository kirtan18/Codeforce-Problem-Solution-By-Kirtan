// https://codeforces.com/problemset/problem/456/A


void solve(){
       
       int n ; cin >> n;
       int flag = 0;
  
       rep(i,0,n){
          int p , q;
          cin >> p >> q;

          if(p < q){
            flag = 1;
          } 
       } 

       if(flag == 1){
         cout << "Happy Alex" <<endl;
       }
       else{
         cout << "Poor Alex" <<endl;
       }

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
