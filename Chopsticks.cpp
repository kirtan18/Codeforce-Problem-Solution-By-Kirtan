// https://www.codechef.com/problems/TACHSTCK


void solve(){
     
      lli n , d;
      cin >> n >> d;
     
      lli a[n];
  

      rep(i,0,n){
         cin >> a[i];
      }

      sort(a,a+n);
      int cnt = 0; 
      for(int i = 0; i < n ; i++){
          if(a[i+1] - a[i] <= d){
            cnt++;
            i += 1;
          }
      }

      cout << cnt << "\n";
     
}
 
