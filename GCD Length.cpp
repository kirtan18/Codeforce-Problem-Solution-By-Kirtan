// https://codeforces.com/contest/1511/problem/B



void solve(){
     
     int a, b, c;
     cin >> a >> b >>c;

     a=a-1;
     b=b-1;
     c=c-1;
     int First=pow(10, a);
     int Second=pow(10,b)+pow(10,c);
     
     cout << First  << " " <<Second <<endl;
     
     }
