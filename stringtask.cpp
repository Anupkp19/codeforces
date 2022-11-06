#include<iostream>
#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main(){

string s;
cin>>s;
string b;

long long  n;
n = s.length();
transform(s.begin(), s.end(), s.begin(), ::tolower);
for(long long  i=0; i<n; i++){
	if(s[i]=='a' || s[i] == 'e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
		continue;
	}
	b+='.';
	b+=s[i];

}

cout<< b << endl;

return 0;

}