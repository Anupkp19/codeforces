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
const int  N = 100 + 13;
int main(){
ll  n,m ;
	cin>> n;
	cin>>m;
	ll arr[N]; 
for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
}
ll ans1 = *max_element(arr, arr+n) + m;
for (int i = 0; i <m; ++i)
{
	int pos=-1;
	for (int i = 0; i < n; ++i)
	{
		if(pos == -1 || arr[i] < arr[pos])
			pos=i;
		
	}
	assert(pos != -1);
	arr[pos]++;
}
ll ans2 = *max_element(arr, arr+n);

cout<< ans2 << " " << ans1 << endl;


	return 0;
}