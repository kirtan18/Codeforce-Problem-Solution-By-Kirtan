// https://codeforces.com/problemset/problem/499/B



void solve(){
    
      int n , m;
      cin >> n >> m;
      
      
      map<string,string>mp;

      for(int i = 0 ; i < m ; i++){
         string s1,s2;
         cin >> s1 >> s2;
         mp[s1] = s2;

      }
      
      for(int i = 0 ; i < n ; i++){

         string x;
         cin >> x;
         
         string y;
         y = mp[x];

         if(x.size() > y.size()){
            cout << y <<" ";
         }else{
            cout << x <<" ";
         }

      }
      cout <<"\n";

   }
