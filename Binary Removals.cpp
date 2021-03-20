
void solve(){
   
   string s;
   cin>>s;
   int flag = 0;
   if(is_sorted(s.begin(),s.end())){
    cout<<"YES"<<"\n";
   }
   else{
    int y = 0;
    for(int i=s.length()-1;i>0;i--){
      if(s[i] == '0' && s[i-1] == '0'){
        flag = 1;
        y = i-1;
        break;
      }
    }
    if(flag == 0){
      cout<<"YES"<<"\n";
      return;
    }
    
    int flag2 = 0;

    for(int i = y; i > 0; i--){
      if(s[i] == '1' && s[i-1] == '1'){
        flag2 = 1;
        break;
      }
    }
    if(flag2 == 0){
      cout<<"YES"<<"\n";
    }else{
      cout<<"NO"<<"\n";
    }
   }

  }

signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int T;cin>>T;
    while(T--){
    solve();
    }
return 0;
}
