https://codeforces.com/problemset/problem/330/B

void solve(){
   int n,m;
   cin >> n >> m;
   set<int>st;
   for(int i = 1 ; i <= n ;i++){
      st.insert(i);
   }
   for(int i = 0 ; i < m ; i++){
      int x,y;
      cin >> x >> y;
      if(st.find(x) != st.end()){
         st.erase(x);
      }
      if(st.find(y) != st.end()){
         st.erase(y);
      }
   }
   cout << n-1 <<"\n";
   int val = *st.begin();
   for(int i = 1 ; i <= n ; i++){
      if(val != i){
        cout << i << " " << val <<"\n";
      }
   }  
}
