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
	ll arr[2000005];

	ll sum1=0,sum2=0,sum3=0;
	for (int i = 1; i <=n; ++i)
	{
		cin>>arr[i];
	}
	ll low=0;
	ll h=n+1;

	while(low<h){
	if(low < h)
		sum1 += arr[low++];
	else if(low>h)
		sum2 += arr[h--];
	
	else{
		sum3 = low;
		sum1  +=  arr[low++];
		sum2 += arr[h--];
	}
	}
	long long a =0;
	cout<< accumulate(arr+1, 1+sum3+arr,0ll);
	return 0;
}