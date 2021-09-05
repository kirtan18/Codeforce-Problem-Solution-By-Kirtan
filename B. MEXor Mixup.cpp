https://codeforces.com/contest/1567/problem/B

void solve(){
     lli a,b;
     cin >> a >> b;

     lli d = a-1,res = 0;
     
     // This is formula to find all xor in array in O(1)      
     if(d % 4 == 0){
        res = d;
     }
     else if(d % 4 == 1){
        res = 1;
     }
     else if(d % 4 == 2){
        res = d+1;
     }
     else{
        res = 0;
     }

     if(res == b){
        cout << a <<"\n";
     }
     else if((res ^ a) == b){
        cout << a+2 <<"\n";
     }
     else{
        cout << a+1 <<"\n"; 
     }
}
