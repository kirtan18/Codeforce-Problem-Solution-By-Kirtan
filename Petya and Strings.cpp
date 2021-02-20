#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
 
     // transform is a Stl of cpp and tolower also 
     // us ethis link for stl for transform  = https://www.geeksforgeeks.org/transform-c-stl-perform-operation-elements/   
 
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int x=s1.compare(s2);
    cout<<x<<endl;
   
 
    // second method 
 
    /*
 
       int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 92) {
            a[i] += 32;
        }
        if (b[i] < 92) {
            b[i] += 32;
        }
    }
    if (a < b) {
        cout << -1;
    } else if (a > b) {
        cout << 1;
    } else if (a == b) {
        cout << 0;
    }
    }
 
    */
    	return 0;
}
