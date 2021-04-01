// https://codeforces.com/problemset/problem/151/A


void solve(){
       
     int n , k , l , c , d , p , nl , np;
     cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

     int a = (l*k)/nl;
     int b = c*d;
     int y = p / np;

     cout << min(a,min(b,y))/n <<endl;

}
