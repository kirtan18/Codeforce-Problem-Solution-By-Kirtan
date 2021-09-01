https://codeforces.com/problemset/problem/4/B


void solve(){
   int day,sumTime;
   cin >> day >> sumTime; 
   int a[day+10][2];
   int min_t = 0 , max_t = 0;
   for(int i = 0 ; i < day ; i++){
      cin >> a[i][0] >> a[i][1];
      min_t += a[i][0];
      max_t += a[i][1]; 
   } 

   if(sumTime > max_t || sumTime < min_t){
      cout << "NO" <<"\n";
   }
   else{
       cout << "YES\n";
       sumTime -= min_t;
       for(int i = 0 ; i < day ; i++){
          cout << a[i][0] + min(sumTime, a[i][1] - a[i][0]) <<" ";
          sumTime -= min(sumTime , a[i][1] - a[i][0]);
       } 
   }
}
