// https://codeforces.com/contest/1102/problem/A


void solve() {
    
    int n;
    cin >> n;
    
    n = n % 4;
    if(n == 0 || n == 3){
        cout << 0 <<"\n";
    }
    else{
        cout << 1 <<"\n";
    }
    
}
