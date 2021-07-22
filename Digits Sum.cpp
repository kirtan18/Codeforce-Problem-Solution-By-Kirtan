https://codeforces.com/contest/1553/problem/A


void solve(){
     
     int n; cin >> n;

     int a1 = n % 10;

     if(a1 == 9){
        cout << (n / 10) + 1 << "\n";
     }
     else{
        cout << n/10 << "\n";
     }
}
