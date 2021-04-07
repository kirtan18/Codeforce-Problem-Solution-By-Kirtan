// https://codeforces.com/problemset/problem/496/A

void solve(){
        
      int n;
      cin>>n;
      int arr[n];
      vector<int>v;

      rep(i,0,n){
         cin >> arr[i];
      }  
      
      int mx = INT_MIN;
      int rem = 2;

      if(n == 3){
        mx = arr[2]-arr[0];
        cout << mx << endl; 
        return;
      }
      else{
      for(int j = 0; j < n-1 ; j++){
        
        for(int i = n-1 ; i >= 0 ; i--){
          
            if(rem == i){
               mx = max(mx , (arr[i] - arr[rem-2]));
               
            } 
        
            mx = max(mx , (arr[i] - arr[i-1]));

        }
        
        if(mx != n){
            v.push_back(mx);
            mx = 0;
        }
        if(rem != n-1){
            rem++;
        }
         
      }

      int ans = *min_element(v.begin(),v.end());
      cout << ans <<endl;  

      // for(int i=0;i<v.size();i++){
      //   cout << v[i] <<" ";
      // }

    }  
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
