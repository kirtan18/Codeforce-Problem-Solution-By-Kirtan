// https://codeforces.com/problemset/problem/447/B



int ind = 1;
int sum_string(string s , int a[]){
    
    int sum = 0;
    for(int i = 0 ; i < s.size() ; i++){
      sum += (ind * a[s[i] - 'a']);
      ind++; 
    }
    return sum; 
}


int sum_number(int a[] , int k){
    
    sort(a,a+26); 
    int mx = a[25];   
    int sum = 0;

    for(int i = 0 ; i < k ; i++){
        sum += (mx * ind);
        ind++;
    }

    return sum;
}

void solve(){
     
     string s;
     cin >> s;
     int k;cin >> k;
     int a[26];
    
     rep(i,0,26){
        cin >> a[i];
        
     }  

     int sum =  sum_string(s,a);
     
     int sum1 = sum_number(a,k);

     cout << sum + sum1 <<"\n";

}
