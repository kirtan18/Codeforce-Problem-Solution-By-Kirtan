https://codeforces.com/problemset/problem/276/B


void solve(){
    string s;
    cin >> s;

    map<char,int>mp;
    for(auto it : s){
        mp[it]++;
    }
     
    int odd = 0;
    for(auto it : mp){
        if(it.second % 2 == 1){
            odd++;
        }
    } 

    if(odd % 2 == 1 || odd == 0){
        cout << "First" << "\n";
    }else{
        cout<< "Second" << "\n";
    }
}

signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
   
    // int T;
    // cin >> T;
    // while(T--){
    solve();
    // }
    return 0;
}
