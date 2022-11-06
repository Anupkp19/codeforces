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
int n,k;
vector<int> a;

bool good(double x){
	int s=0;
	for(int i=0; i<n; i++){
		s+= floor(a[i]/x );

	}
	return s>= k;
}
int main(){

	cin>> n>>k;
	a.resize(n);
	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
	}
	double l=0;
	double r= 1e8;
	for (int i = 0; i <100; ++i)
	{
		double m = (l+r)/2;
		if(good(m)){
			l=m;
		}else{
			r=m;
		}
	}
	cout<< setprecision(20) << l<<endl;
	return 0;
}