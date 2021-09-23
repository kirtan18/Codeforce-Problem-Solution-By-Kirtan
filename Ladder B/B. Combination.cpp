https://codeforces.com/problemset/problem/155/B

void solve(){
  int n; cin >> n;
  vector<int>zr;
  int moves = 1;
  int score = 0;

  for(int i = 0 ; i < n ; i++){
    int x,y;
    cin >> x >> y;
    if(y != 0){
        score += x;
        moves += y-1;
    }
    else{
        zr.push_back(x);
    }
  }

  sort(zr.begin(),zr.end(),greater<int>());

  for(int i = 0 ; i < zr.size() ; i++){
    if(moves > 0){
        moves--;
        score += zr[i];
    }
    else{
        break;
    }
  } 
  cout << score << "\n";
}
