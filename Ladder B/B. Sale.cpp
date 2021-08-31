https://codeforces.com/problemset/problem/34/B

void solve(){
   int n,m;
   cin >> n >> m;
   int a[n+10];
   int earn = 0;
   for(int i = 0 ;i < n ; i++){
    cin >> a[i];
   }
   sort(a,a+n);
   for(int i = 0 ; i < m ; i++){
     if(a[i] < 0){
        earn += (-a[i]);
     }
     // else{
     //    earn -= a[i];
     // }
   }
   cout << earn << "\n";
}
