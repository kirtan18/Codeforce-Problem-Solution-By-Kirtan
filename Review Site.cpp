// https://codeforces.com/contest/1511/problem/A



void solve(){
 
    int n;
    cin >> n;
    int s;
    int up = 0, down = 0 ;
 
    for(int i=0;i<n;i++){
        cin >>s;
        if(s == 1){
            up++;
        }
        if(s == 2){
            down++;
        }
        if(s == 3){
            if(up==down){
                up++;
            }
            else if(up < down){
                up++;
            }
            else{
                up++;
            }
                        
            }
        } 
    
   cout << up <<endl;   
}
