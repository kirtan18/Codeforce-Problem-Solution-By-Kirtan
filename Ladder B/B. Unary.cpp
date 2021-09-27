https://codeforces.com/problemset/problem/133/B



void solve(){
   string s;
   cin >> s;
   int size = 0;
   for(int i = 0 ; i < s.size() ; i++){
      size *= 16;
      switch(s[i]){
        case '>':
            size += 8;
            break;

        case '<':
            size += 9;
            break;
        case '+':
            size += 10;
            break;
        case '-':
            size += 11;
            break;
        case '.':
            size += 12;
            break;
        case ',':
            size += 13;
            break;  
        case '[':
            size += 14;
            break;
        case ']':
            size += 15;
            break;
        default:
            break;                             
      }
      size %= mod;
   }
   cout << size <<"\n";
}
