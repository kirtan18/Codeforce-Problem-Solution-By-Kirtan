https://codeforces.com/problemset/problem/116/B

void solve(){
   int n,m;
   cin >> n >> m;
   vector<vector<char>>mat(n,vector<char>(m));
   for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
        cin >> mat[i][j];
    }
   }
   
   for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
        if(mat[i][j] == 'P'){
            if((i+1)<n && (i+1)>0 && mat[i+1][j] == 'W'){   
                    mat[i][j] = 'E';
                    mat[i+1][j] = 'N';
            }
            else if((i-1)<n && (i-1)>=0 && mat[i-1][j] == 'W'){              
                    mat[i][j] = 'E';  
                    mat[i-1][j] = 'N';             
            }
            else if((j+1)<m && (j+1)>0 && mat[i][j+1] == 'W'){                
                    mat[i][j] = 'E'; 
                    mat[i][j+1] = 'N';           
            }
            else if((j-1)<m && (j-1)>=0 && mat[i][j-1] == 'W'){
                    mat[i][j] = 'E';  
                    mat[i][j-1] = 'N';
            }
        }
    }
   }  
   int cnt = 0;
   for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
        if(mat[i][j] == 'E'){
            cnt++;
        }
    }
   }
   cout << cnt <<"\n";
}
