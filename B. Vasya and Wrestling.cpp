https://codeforces.com/problemset/problem/493/B



void solve(){
    lli n;
    cin >> n;
    vector<int>v1,v2;
    lli sum1 = 0,sum2 = 0;
    bool last = true;
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x;
        if(x >= 0){
            v1.pb(x);
            sum1 += x;
            last = true;
        }
        else{
            x*=-1;
            v2.pb(x);
            sum2 += x;
            last = false;
        }
    }
    
    if(sum1 > sum2){
        cout << "first" <<"\n";
    } 
    else if(sum2 > sum1){
        cout << "second" <<"\n";
    }
    else{
        if(v1 > v2){
            cout << "first" <<"\n";
        }
        else if(v2 > v1){
            cout << "second" <<"\n";
        }
        else{
            if(last){
                cout << "first" <<"\n";
            }
            else{
                cout << "second" <<"\n";
            }
        }
    }
}
