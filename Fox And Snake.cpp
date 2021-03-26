// https://codeforces.com/problemset/problem/510/A



void solve(){
    int n , m;
    cin >> n >> m;
    bool l = false;
    int r = 1;

    while(r <= n){

        if(r % 2 == 1){
            for(int i=0;i<m;i++){
                cout << "#";
            }
            cout << endl;
        }

        else if(r % 2 == 0 && l == false){
            for(int i=0;i<m-1;i++){
                cout << ".";
            }
            cout << "#";
            l = true;  
            cout << endl;
        }

        else{
            cout << "#";

            for(int i=0;i<m-1;i++){
                cout<<".";
            }
            cout << endl;
            l = false;
        }
        r++;
    }

}

 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    // int t; cin>>t;
     // while(t--){
      solve();
     // } 
    return 0;
  }
