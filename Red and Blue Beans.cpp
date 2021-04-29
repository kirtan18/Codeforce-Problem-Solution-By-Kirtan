https://codeforces.com/contest/1519/problem/A




void solve() {
     
     int r,b,d;
     cin >> r >>b >> d;

     int left = abs(r-b);

     if(left == 0){
        cout <<"YES" <<"\n";
        return;
     } 

     int now = 0;
     int ins = left / min(r,b);
     now += ins;

     int extra = left % min(r,b);

     if(extra != 0){
        now++;
     }

     if(now <= d){
        cout <<"YES" <<"\n";
     }else{
        cout<<"NO" <<"\n";
     }


}
