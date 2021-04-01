// https://codeforces.com/problemset/problem/378/A




void solve(){
       
     int a , b;
     cin >> a >> b;
     int f = 0 , m = 0 , l = 0;
     
     for(int i=1; i<=6 ; i++){
        if(abs(a-i) < abs(b-i)){
           f++;
        }
        else if(abs(b-i) < abs(a-i)){
            l++;
        }
        else{
            m++;
        }
     }
     
     cout << f << " " << m << " "  << l <<endl;
}
