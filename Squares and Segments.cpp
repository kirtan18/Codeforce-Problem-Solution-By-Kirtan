// https://codeforces.com/contest/1099/problem/B





void solve() {

    int n;
    cin >> n;
    
    int h = sqrt(n);
    int w = h;
    if(w * h < n){
        h++;
    }

    if(w * h < n){
        w++;
    }

    cout << w + h <<"\n";
     
}
 
