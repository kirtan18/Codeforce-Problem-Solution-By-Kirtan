https://codeforces.com/problemset/problem/362/B


void solve(){
     
     int n , m;cin >> n >> m;
     int a[m+10];
     map<int,int>mp;
     for(int i = 0 ;  i < m ; i++){
        cin >> a[i];
        mp[a[i]]++;
     }
     sort(a,a+m);

     if(a[0] == 1 || a[m-1] == n){
        cout << "NO" <<"\n";
        return;
     }
     else{
         int cnt = 0; 
         for(int i = 0 ; i < m ; i++){
         
          if(mp.find(a[i]+1) != mp.end()){
            cnt++;
          }
          if(mp.find(a[i]+2) != mp.end()){
            cnt++;
          }
         
          if(cnt == 2){
            cout << "NO" <<"\n";
            return;
          }
          cnt = 0;
        }
     }
    cout << "YES" <<"\n";

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void solve(){
     
     for(int i = 0 ; i < m-2 ; i++){
        if(a[i+2] == a[i] + 2){
            flag = false;
            break;
        }
     }
     if(flag)cout << "YES" <<"\n";
     else{
        cout << "NO" <<"\n";
     }

}


