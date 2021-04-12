// https://codeforces.com/contest/1511/problem/C


void solve(){
   
   int n , q;
   cin >> n >> q;
   map<int,int>mp;
   int arr[n];
   for(int i = 0 ; i < n ; i++){
       cin >> arr[i];
       if(mp[arr[i]] == 0){
          mp[arr[i]] = i+1;
       }
   }

    
    while(q--){
      int t;
      cin >> t;
      int ans = mp[t];
      cout << mp[t] <<" ";
      mp.erase(t);
      
      for(auto i : mp){
          
          if(i.second  < ans){
            mp[i.first] = i.second + 1;
          }

      }
      mp[t] = 1;
      
    }
    cout << endl;

}
