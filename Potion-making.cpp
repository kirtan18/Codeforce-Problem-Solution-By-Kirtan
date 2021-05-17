// https://codeforces.com/contest/1525/problem/A


int gcd(lli a, lli b){
    
    if(b == 0){
        return a;
    }
 
    gcd(b,a%b);
}   


void solve() {
    
   int n;
   cin >> n;

   int x = n;
   int y = 100 - n;

   int GCD = gcd(x,y);

   cout << (x/GCD) + (y/GCD) << "\n";
   
}
