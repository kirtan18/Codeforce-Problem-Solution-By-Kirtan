
// https://codeforces.com/problemset/problem/507/B

void solve(){
     
    lli r , x , y , x1  , y1 ;

    cin >> r >> x >> y >> x1 >> y1;
   
    long double a = (x1-x) * (x1 - x) + (y1 - y) * (y1-y);

    long double b = 2 * r;

    long double s = sqrt(a);

    long double ans = ceil((s/b));

    cout << ans << "\n";

}
 
