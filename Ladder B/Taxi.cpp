https://codeforces.com/problemset/problem/158/B


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a=0,b=0,c=0,d=0,count=0;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t==1){
            a++;
        }else if(t==2){
            b++;
        }else if(t==3){
            c++;
        }else{
            d++;
        }
    }
    
    count+=d;
 
    if(c<a){
        count+=c;
        a=a-c;
        c=0;
    }else if(a<=c){
        count+=a;
        c=c-a;
        a=0;
    }
 
    if(c>0){
        count+=c;
        c=0;
    }
 
    if(b>0){
        count+= b/2;
        b = b%2;
    }
 
    int left = a + (b*2); // 1 1 2 -> 1 2 group multiply 2;1111
    if(left<=4 && left>0){
        count+=1;
    }else if(left%4 !=0){
        count+= (left/4)+1; /// 1 1 1 1 1 2  2 2 2 2 --> 16 %4=0 --> 4 15 %4 --> 3 + 1
    }else{
        count+= left/4;
    }
 
    cout<<count<<"\n";
    return 0;
}
