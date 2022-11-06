#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main(){
int k ;
	cin>> k;
	string s;
	cin>> s; 
char ch;
int l= s.size();
int count=0;
sort(s.begin(), s.end());
for(int i=0; i<s.size(); i++){
	if(i%k == 0){
		ch = s[i];
	}
	if(s[i] == ch){
		count++;
	}
}

if(l==count && count%k ==0){
	for(int i=0; i<k; i++){
		for(int l=0; l<s.size(); l+=k)
			cout<< s[l];
	}
}
else{
	cout<< "-1";
}

	return 0;
}
