// https://www.codechef.com/problems/CIELRCPT




void solve(){
     
      int n;
      cin >> n;

      for(int i = 0 ; i < n ; i++){
         
         int t ;
         cin >> t;
         int sum = 0,item = 2048;

         while(t > 0){
           
           sum = sum + t /item;
           t = t % item;
           item = item / 2;

         }        
         cout << sum << "\n";
      }   
}
