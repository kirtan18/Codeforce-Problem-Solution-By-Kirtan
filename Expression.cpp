
void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  
  int ex1 = a+b+c;
  int ex2 = a*b*c;
  int ex3 = a*(b+c);
  int ex4 = (a+b)*c;
  int ex5 = a+b*c;
  int ex6 = a*b+c;
 
  cout<<max(ex1,max(ex2,max(ex3,max(ex4,max(ex5,ex6)))));
 
 
 }
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
  solve(); 
return 0;
}
