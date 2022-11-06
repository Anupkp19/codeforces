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
string s ;
	cin>> s;
	int n=s.length();
int count1=0;//uppercase
int count2=0;//lowercase
	for(int i=0; i<n; i++){
		if(isupper(s[i])){
			count1++;
		}else{
			count2++;
}
	}
	
	if(count1>count2){
		for (int i = 0; i <s.size(); ++i){
	char ch;	
	ch= toupper(s[i]);
		cout<<ch;
		}
	
}else{
	for (int i = 0; i <s.size(); ++i)
		{char ch;
	ch=tolower(s[i]);
     cout<<ch;
	}
}

	return 0;
}