// https://codeforces.com/contest/1521/problem/A




void solve() {
 
   ll x,y; cin>>x>>y;
    if(y>2){
        cout<<"YES"<<endl;
        cout<<(y-1)*x<<" "<<x<<" "<<x*y<<endl;
    }
    else if(y==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<x<<" "<<3*x<<" "<<4*x<<endl;
    }
 
}
