// https://codeforces.com/contest/1099/problem/A




void solve() {
     
     int w , h;
     cin >> w >>h;
     int u1 , d1 , u2 , d2;
     cin >> u1 >> d1 >> u2 >>d2;
     int x = h;
     int f1 = w + h;
     int f2 ,f3;
     while(x != 0){
        
        if(x == d1){
            if(d1 == h){
                f1 = f1 - u1;
            }else{
                f1 = (f1 + d1) - u1; 
            }

            if(f1 < 0){
                f1 = 0;
            }
            
        }
        else if(x == d2){
            if(d2 == h){
                f1 = f1 - u2;
            }else{
                f1 = (f1 + d2) - u2;
            }
            if(f1 < 0){
                f1 = 0;
            }
        }
      
        if(x != d1 && x != d2 && x != h){
              
            f1 += x;
        }
     
        x--; 

    }
 
    cout << f1 <<"\n";
   
}
