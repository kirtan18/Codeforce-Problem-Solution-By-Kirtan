 //  https://codeforces.com/problemset/problem/230/A

void solve(){
     int s ,n;
     cin >> s >> n ;
     int flag = 0;
     pii p[1000];
     for(int i=0;i<n;i++){
       cin >> p[i].first >> p[i].second;
     }
     
     sort(p,p+n);
     for(int i=0;i<n;i++){
       if(s<=p[i].first){
         flag = 1;
         break; 
       }else{
        s += p[i].second;
       }
     }
     if(flag == 0){
      cout<<"YES"<<endl;
     }else{
      cout<<"NO"<<endl;
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
