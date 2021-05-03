// https://codeforces.com/contest/1515/problem/B



bool isPerfectSquar(long double x){

     if(x >= 0){
          
          long long sr = sqrt(x);
          return sr * sr == x;
     } 
     return false;
}


void solve() {
     
      int n;
      cin >> n;

      if(n%2 != 0){
        cout <<"NO" <<"\n";
        return;
      }

      int a = n/2;
      
      if(isPerfectSquar(a)){

         cout <<"YES"<<"\n";
         return;
      }
       
      if(n%4 != 0){
        cout <<"NO"<<"\n";
        return;
      }

      a = n/4;
      
      if(isPerfectSquar(a)){

         cout <<"YES"<<"\n";
         return;
      }

      cout <<"NO" <<"\n";
}
 
