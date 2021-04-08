// https://codeforces.com/problemset/problem/255/A



void solve(){
     
     int n; cin >> n;
     int a[n];
      
     int x=1,y=2,z=3; 
     int chest = 0 , bicep = 0 , ba = 0;

     for(int i=1;i<=n;i++){
        cin >> a[i];
     }
      
     for(int i = 1; i <= n ;i++){

        if(x == i){
          chest += a[i];
          x += 3;
        }
        else if(y == i){
          bicep += a[i];
          y += 3;   
        }
        else if(z == i){
            ba += a[i];
            z += 3;
        }  
     }

     if(chest > bicep && chest > ba){
        cout << "chest" << "\n";
     }
     else if(bicep > chest && bicep > ba){
        cout << "biceps" << "\n";
     }
     else{
        cout << "back" << "\n";
     }
     
      
}

