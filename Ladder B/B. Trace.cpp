https://codeforces.com/problemset/problem/157/B

r1^2 - r2^2 + r3^2
radius = pi * (R ^ 2)

void solve(){
   int n;
   cin >> n;
   double a[n+10];
   for(int i = 0 ; i < n ; i++){
    cin >> a[i];
   }
   sort(a,a+n);
   bool flag = true;
   double value = 0;
   
   for(int i = n-1 ; i >= 0 ; i--){
      if(flag){
        value += (a[i]*a[i]);
        flag = false;
      }
      else{
        flag = true;
        value -= (a[i] * a[i]);
      }
   }
   double ans = pi * value;
   cout << ans <<"\n";
}
