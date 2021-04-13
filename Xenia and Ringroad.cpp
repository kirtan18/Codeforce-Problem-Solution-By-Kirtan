// https://codeforces.com/problemset/problem/339/B


void solve(){
   
   int n , m;
   cin >> n >> m;

   lli ans = 0;
   int loc = 1;
   
   while(m--){
      
      int now;
      cin >> now;

      if(now >= loc){
        ans += (now - loc);
      }
      else{
        ans += n - (loc - now);
      }
      
      loc = now;

   }

   cout << ans <<"\n";

}
