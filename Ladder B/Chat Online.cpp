https://codeforces.com/problemset/problem/469/B


void solve(){
    
    int p,q,l,r;
    cin >> p >> q >> l >> r;
    vector<pair<int,int>>v1,v2;
    int ans = 0;
    for(int i = 0 ; i < p ; i++){
        int x,y;
        cin >> x >> y;
        v1.push_back(make_pair(x,y));
    }
    for(int i = 0 ; i < q ; i++){
        int x,y;
        cin >> x >> y;
        v2.push_back(make_pair(x,y));
    }

    for(int i = l ; i <= r ; i++){
        bool flag = false;
        for(int j = 0 ; j < p ; j++){
            for(int k = 0 ; k < q ; k++){
                if(v1[j].first >= v2[k].first+i and v1[j].first <= v2[k].second+i){
                    flag = true;
                }
                if(v2[k].first+i >= v1[j].first and v2[k].first+i <= v1[j].second){
                    flag = true;
                }
            }
        }
        if(flag){
            ans++;
        }
    } 
    cout << ans <<"\n";
}

