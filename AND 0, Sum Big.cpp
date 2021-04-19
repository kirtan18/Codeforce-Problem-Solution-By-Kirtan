// https://codeforces.com/contest/1514/problem/B



const long long mod=1e9+7;
void solve(){
   
    int n , k;
    cin >> n >>k;

    long long ans = 1;  

    for(int i = 0 ; i < k ; i++){
        
        ans = ans * n % mod;
     }

    cout << ans << "\n"; 

 }

 
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
    
    int T; cin >> T;    
    while(T--){
       solve();
    }
    return 0;

}
