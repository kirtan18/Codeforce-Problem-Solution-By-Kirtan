// https://codeforces.com/contest/1525/problem/B



void solve() {
    
   int n;
   cin >> n;
   
   int a[n];
 
   rep(i,0,n){
    cin >> a[i];
   } 
   int cnt = 0;
   for(int i = 1 ; i <= n ; i++){
      if(a[i-1] == i){
        cnt++;
      }
   } 
   // cout << cnt <<" "; 
   if(cnt  == n){
    cout << 0 <<"\n";
   }
   else if(a[0] == 1 || a[n-1] == n){
      cout << 1 <<"\n";
   }
   else if(a[0] == n && a[n-1] == 1){
    cout << 3 << "\n";
   }
   else if(a[0] != 1 && a[n-1] != n ){
    cout << 2 <<"\n";
   }
}
