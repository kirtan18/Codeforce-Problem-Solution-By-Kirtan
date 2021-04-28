// https://codeforces.com/problemset/problem/265/B





void solve(){
     
     int n;cin >> n;

     int a[n];

     rep(i,0,n){
        cin >> a[i];
     }
     int time = n + n -1;
     int h1 = 0;
     for(int i = 0 ; i < n ;i++){
        
        time += abs(a[i] - h1);
        h1 = a[i];
     } 
     cout << time <<"\n";

}
