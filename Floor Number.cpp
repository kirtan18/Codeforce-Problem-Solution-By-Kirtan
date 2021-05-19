https://codeforces.com/contest/1426/problem/A

 

void solve() {
  
    lli n , x;
    cin >> n >> x;

    if(n == 1 || n == 2){
        cout << 1 << "\n";
        return;
    }
     
    lli ans = ((n-3)/x)+2; 
    
    cout << ans << "\n";

}


signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
   
    int T;
    cin >> T;
    while(T--){
         solve(); 
    }

    return 0;
}
