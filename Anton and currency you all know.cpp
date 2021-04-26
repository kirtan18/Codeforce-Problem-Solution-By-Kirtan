// https://codeforces.com/problemset/problem/508/B



void solve(){
     
     string s;
     cin >> s;
     int n = s.size()-1;
     int ind = n;  

     for(int i = 0 ; i < n ; i++){
         
         if((s[i]-'0')%2 == 0){

             ind = i;

             if(s[n] > s[i]){
                break;
             }

         }

    }

    if(ind == n){
        cout << -1 <<"\n";
    }
    else{
        swap(s[ind],s[n]);
        cout << s << "\n";
    }

}
