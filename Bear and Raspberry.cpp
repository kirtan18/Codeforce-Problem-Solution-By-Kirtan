// https://codeforces.com/problemset/problem/385/A

void solve(){
      
      int n , c;
      cin >> n >> c;
      int ans = 0;
      int arr[n];
      int mn = INT_MIN;
      rep(i,0,n){
        cin >> arr[i];
      }

      rep(i,0,n){
        if(arr[i] > arr[i+1]){
           ans = arr[i] - arr[i+1];
            mn = max(mn , ans);
           
        }
      }
      if(mn == INT_MIN || mn < c){
        cout << 0 <<endl;
        return;
      }
     cout << mn-c <<endl;
}

 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
    
    // int T; cin >> T;    
    // while(T--){
       solve();
    // }
    return 0;

}
