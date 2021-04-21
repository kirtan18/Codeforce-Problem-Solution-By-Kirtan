// https://codeforces.com/contest/451/problem/





void solve(){
   
        int n;cin >> n;
        
        int a[n];
        int b[n];
        map<int,int>mp;
        for(int i = 0 ; i < n ; i++){

            cin >> a[i];
            b[i] = a[i];
        }
         
        sort(b,b+n);

        for(int i = 0 ; i < n ; i++){

            mp[b[i]] = i;
        }

        for(int i = 0 ; i < n ; i++){

            a[i] = mp[a[i]];     
        }

        int L = -1;
        for(int i = 0 ; i < n ; i++ ){
            
            if(a[i] != i){
                L = i;
                break;
            }

        }

        int R = -1;
        for(int i = n - 1 ; i >= 0 ; i--){
      
           if(a[i] != i){
             R = i;
             break;
           }
        }
  
        if(L == -1 || R == -1){
            cout << "yes" <<"\n";
            cout << 1 << " " << 1 << "\n";
        }

        else{
          
           reverse(a+L,a+R+1);


           int ok = true;
           for(int i = 0 ; i < n ; i++ ){
              if(a[i] != i){
                ok = false;
              }
           }

           if(ok){
             cout << "yes" << "\n";
             cout << L+1 <<" " <<R+1 <<"\n";
           } 
           else{
            cout << "no" <<"\n";
           }


        }  

   }

signed main(){;
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);;
#endif 
   

    solve(); 

    return 0;;
}


