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
	string  str;
	bool c= true;
	char u;
	cin>>str;

	for (int i = 1; i < str.length(); i++)
	{
		if(islower(str[i])){
			c = false;
		}
	}

if(c == true){
	for(int i=0; i<str.length(); i++){

		if(islower(str[i]))
			u= toupper(str[i]);
		else
			u = tolower(str[i]);
		cout<< u;
	}
}
else
	cout<< str;


	return 0;
}