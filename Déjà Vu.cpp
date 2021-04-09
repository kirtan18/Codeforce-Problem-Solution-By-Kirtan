// https://codeforces.com/contest/1504/problem/A



bool palindrome( const string &s){
    int l = 0; 
    int h = s.length()-1;

    while(h > l){
        if(s[l++] != s[h--]){
            return false;
        }
    }
    return true;
}

void solve(){
    
 
    string s;
    cin >> s;
  
    if(!palindrome(s + 'a')) {
            cout << "YES\n" << s << 'a' << "\n";
    }
    else if(!palindrome('a' + s)) {
            cout << "YES\n" << 'a' << s << '\n';
    }
    else {
            cout << "NO\n";
        }
    
    
}
