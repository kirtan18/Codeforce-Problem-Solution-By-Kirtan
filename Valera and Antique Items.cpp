https://codeforces.com/problemset/problem/441/A



void solve(){
     
     int n , v;
     cin >> n >> v;
     int s,k;
     int arr[51];
     int m = 0;
     int l = 0;


     for(int i=1;i<=n;i++){
        cin >> s;
        l = 0;
        for(int j=0;j<s;j++){
            cin >> k;
            if(k < v && l == 0){
                
                arr[m] = i;
                m++;
                l = 1;

            }
        } 
     }
     cout << m <<endl;

     for(int i=0;i<m;i++){
        cout << arr[i] << " ";
     }

}

 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
   
    solve();
    return 0;
  }
