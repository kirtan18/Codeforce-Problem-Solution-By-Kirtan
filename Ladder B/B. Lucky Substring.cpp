https://codeforces.com/problemset/problem/122/B

void solve(){
  string s;
  cin >> s;

  int four=0,sev=0;

  for(int i = 0 ; i < s.size() ; i++){
     if(s[i] == '4'){
        four++;
     }
     else if(s[i] == '7'){
        sev++;
     }
  }  

  if(four == 0 && sev == 0){
    cout << -1 << "\n";
  }
  else{
    if(four >= sev){
        cout << 4 << "\n";
    }
    else{
        cout << 7 <<"\n";
    }
  }
   
}
