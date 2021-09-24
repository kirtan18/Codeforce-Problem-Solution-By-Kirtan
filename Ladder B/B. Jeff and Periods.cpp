https://codeforces.com/problemset/problem/352/B


void solve(){
  int n;
  cin >> n;
  unordered_map<int,vector<int>>mp;
  for(int i = 0 ; i < n ; i++){
    int x; cin >> x;
    mp[x].push_back(i);
  }

  set<pair<int,int>>ans;

  for(auto it : mp){

    if(it.second.size() == 1){
        ans.insert(make_pair(it.first,0));
    }
    else if(it.second.size() == 2){
        ans.insert(make_pair(it.first,it.second[1]-it.second[0]));
    }
    else{
        bool flag = true;
        int cd = it.second[1]-it.second[0];
        for(int j = 2 ; j < it.second.size() ; j++){
            if(it.second[j] - it.second[j-1] != cd){
                flag = false;
                break;
            }
        }
        if(flag){
            ans.insert(make_pair(it.first,cd));
        }
    }
  }
  cout << ans.size() <<"\n";
  for(auto it : ans){
    cout << it.first << " " << it.second << "\n";
  }

}
