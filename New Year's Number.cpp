// https://codeforces.com/contest/1475/problem/B



void solve() {
   
   lli n;
   cin >> n;
   
   lli mod = n % 2020;
   lli div = n / 2020;
 
   if(mod <= div){
    cout <<"YES" <<"\n";
   }else{
    cout <<"NO" <<"\n";
   }
   
}
 
