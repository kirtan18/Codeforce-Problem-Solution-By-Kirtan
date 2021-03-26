// https://codeforces.com/problemset/problem/432/A


void solve(){
   int n , k;
   cin >> n >> k;
   int x;
   int count = 0;
   int team = 0;
   for(int i=0;i<n;i++){
     
     cin >> x;
     
     if(x == 0){
        count ++;
        if(count == 3){
            team++;
            count = 0;
        }
     }
    else if(5 - x >= k){
        count++;
        if(count == 3){
            count = 0;
            team++;
        }
     }
   }
    cout << team <<endl;
}

 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    // int t; cin>>t;
     // while(t--){
      solve();
     // } 
    return 0;
  }
