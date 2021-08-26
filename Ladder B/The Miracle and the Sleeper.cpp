https://codeforces.com/contest/1562/problem/A


void solve(){
       int l , r;
       cin >> l >> r;
        
       int ans1 = r % l;
       int ans2 = (r+1ll) / 2ll;

       if(ans2 < l){
         ans2 = 0;
       }
       else{
         ans2 = ans2-1;
       }
       cout<< max(ans2,ans1)<<"\n";
    }
