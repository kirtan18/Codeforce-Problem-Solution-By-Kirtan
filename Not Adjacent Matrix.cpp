// https://codeforces.com/contest/1520/problem/C




void solve() {
    
    int n;
    cin >> n;
    int a[n][n] = {0};

    if(n == 1){
        cout << 1 <<"\n";
        return;
    }
    
    else if(n == 2){
        cout << -1 <<"\n";
        return;
    }
    else{

        int c = 1;
        for(int i = 0 ; i < n ; i++ , c+=1){
            a[i][i] = c;
        }
        
        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < i ; j++ , c+=2){
                a[j][i] = c;
                a[i][j] = c+1;
            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ;j++){
                cout << a[i][j] <<" ";
            }
            cout << "\n";
        }

    }
   
}
