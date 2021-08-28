https://codeforces.com/problemset/problem/519/B

void solve(){
    
    int n;
    cin >> n;
    vector<int>v1(n),v2(n-1),v3(n-2);
    int sum1 = 0 , sum2 = 0, sum3 = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> v1[i];
        sum1 += v1[i];
    }
    for(int i = 0 ; i < n-1 ; i++){
        cin >> v2[i];
        sum2 += v2[i];
    }
    for(int i = 0 ; i < n-2 ; i++){
        cin >> v3[i]; 
        sum3 += v3[i];
    }
    
    cout << sum1 - sum2 <<"\n";
    cout << sum2 - sum3 <<"\n";
   
}
