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
	vector<int > a(n),b(n);
	vector<int >c(n);
	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
		cin>>b[i];
	}
	for (int i = 0; i <n; ++i)
	{
	           c[i]= a[i]-b[i];
	}
sort(c.begin(), c.end());
ll ans=0;
for (int i = 0; i <n; ++i)
{
	if(c[i] <= 0) continue;
     int lower = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();


      ans += i-lower;
}
cout<<ans<< endl;

	return 0;
}