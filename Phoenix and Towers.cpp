https://codeforces.com/contest/1515/problem/C




int N,M,X;
int H[100001];

void solve() {
      cin >> N >> M >> X;
      cout <<"YES" <<"\n";

      set<pair<int,int>>s;  // (height,index)

      for(int i = 1 ; i <= M ; i++){
         s.insert({0,i});
      }
      
      for(int i = 0 ; i < N ; i++){
        cin >> H[i];
        pair<int,int>p = *s.begin();
        s.erase(p);
        cout<< p.second <<" ";
        s.insert({p.first+H[i] , p.second});
      }   
      cout <<endl; 
     
}
