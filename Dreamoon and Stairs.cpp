// https://codeforces.com/problemset/problem/476/A


void solve(){
    int n ,m;
    cin >> n >> m;
    
    for(int i = (n+1)/2 ; i <= n ; i++){
       if(i % m == 0){
        cout<< i << endl;
        return;
       }
    }
    cout<< "-1" << endl; 
  
   }
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
   
    solve();
    
return 0;
}
