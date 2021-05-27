// https://codeforces.com/contest/1472/problem/A




 
void solve() {
   
   int w , h , n;
   cin >> w >> h >> n;
 
   int res = 1;
 
   while(w % 2 == 0){
     w = w/2;
     res *= 2;
   }
 
   while(h % 2 == 0){
     h = h/2;
     res *= 2;
   }
 
   cout << (res >= n ? "YES\n" : "NO\n"); 
}
