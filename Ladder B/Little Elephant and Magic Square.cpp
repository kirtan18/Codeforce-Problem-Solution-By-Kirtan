// https://codeforces.com/problemset/problem/259/B


void solve() {
    
   int a[3][3];
 
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> a[i][j];
        }
    }
    
    // x 3 6
    // 5 y 5
    // 4 7 z
    
    // 10 + y = 11 + z
    // 9 + x = 11 + z 
    // 9 + x = 10 + y
    
    // x + y + z = x + 3 + 6
    // y + z = 3 + 6
    // y + z = 9
    // y = z - 9
 
    // 10 + z - 9  = 11 + z
    // 2*z = 10
    // z = 5
    // y = 4 
    // x = 6
 
    // y = (9 + 11 - 10)/2 = 5
 
    int y = (a[0][1] + a[0][2] + a[2][0] + a[2][1]- a[1][0] - a[1][2] )/2;
    
    // use this  10 + y = 11 + z 
    // so z =  10 - 11 + y
 
    int z = (a[1][0] + a[1][2]  - a[2][0] - a[2][1] + y);
 
    // 9 + x = 11 + z
    // so x =  11 + z - 9
    int x = (a[2][0] + a[2][1] + z - a[0][1] - a[0][2]);
 
    a[0][0] = x;
    a[1][1] = y;
    a[2][2] = z;
    
     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
 
    
}
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
   
    // int T;
    // cin >> T;
    // while(T--){
         solve(); 
    // }
 
 
    return 0;
}
 
