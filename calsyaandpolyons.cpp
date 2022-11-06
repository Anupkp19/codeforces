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
ll n ;
	cin>> n;
	int  v[n];
	v[0]=0;
	ll e=0,d=0;
	for (int i = 1; i <= n; ++i)
	{
		cin>>v[i];
		e+= v[i-1]-v[i];

		if(e<0){
			d-=e;
			e=0;
		}

	}
	cout<<d<<endl;


	return 0;

}