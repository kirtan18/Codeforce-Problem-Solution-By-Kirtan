#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
 
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
 
	// here  is  if the string is in vowel then remove and  replace  the (.) but check the  two type  vowel uppercase and lowercase  so  here is  two type vowel then replace dot.
	// "A", "O", "Y", "E", "U", "I",
 
	// time == O(n)
	
		string s,s2;
		cin >> s;
 
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' ){
                continue;         
			 }
   			
   			else{
                s2 += '.';
                s2 += towlower(s[i]);
   			}
 
   			// other method
   			/*
            else{
	           s2.apend('.');
	           s2.apend(s[i]);
            } 
   			*/ 
        }
 
       cout<<s2<<endl; 
 
    	return 0;
}
