// https://codeforces.com/contest/1520/problem/A

void solve() {
    
    int n;cin >> n;
    string s;
 
    cin >> s;
    map<char,int>mp;
    for(int i = 0 ; i < n ; i++){
        if(mp.find(s[i]) != mp.end()){
           if(mp[s[i]] != i-1){
             cout <<"NO"<<"\n";
             return;
           }
        }
        mp[s[i]] = i;
    }
 
    cout <<"YES"<<"\n";
 
 
}
