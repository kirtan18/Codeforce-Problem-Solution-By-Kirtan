// https://codeforces.com/problemset/problem/478/B


lli pairs(lli n){

    return n * (n-1) / 2; 
}


void solve(){
   
   lli n , m;
   cin >> n >> m;
   
   lli a = n / m;
   lli b = n % m;

   lli min = pairs(a) * (m - b) + pairs(a+1) * b;

   lli  max = pairs(n - m + 1);
  
   cout << min << " " << max <<"\n";

}
