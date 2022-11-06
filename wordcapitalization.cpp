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
	for (int i = 0; i <1; ++i)
	{
		char ch;
		ch =toupper(s[0]);
		cout<<ch;
	}
	for (int i = 1; i <s.size() ; ++i)
	{
		cout<<s[i];
	}
	// alternate soluton
	// s[0] = toupper(s[0]);
	// cout<<s 
	return 0;
}