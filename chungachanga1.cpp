#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//#define max(a, b) (a < b ? b : a)
//#define min(a, b) ((a > b) ? b : a)
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
ll x,y,z ;
	cin>> x >>y >> z;
	
	ll result =0;
	result =(x+y)/z;
	ll result2 =0;
	ll i =x%z;
	ll j= y%z;
	result = (i+j)/z;
	if(result >=1){
		result2 = z- max(i,j); 
	}
	result =(x+y)/z;
	

	cout<< result << " " << result2<< endl;
	return 0;
}