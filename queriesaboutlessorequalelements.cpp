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
ll n,m ;
	cin>> n>>m;
	ll arr1[n], arr2[m], arr3[m];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr1[i];
	}
	for (int i = 0; i <m; ++i)
	{
		cin>>arr2[i];
	}
	sort(arr1, arr1+n);
	int count =0;
	
	
	for (int i = 0; i <m; ++i)
	{
	 cout<<upper_bound(arr1,arr1+n,arr2[i])-arr1<<" ";

		

	}

	return 0;
}