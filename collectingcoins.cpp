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
ll t;
	cin>>t;
	while(t--){
		ll arr[3];
		int n;
		cin>>arr[0]>>arr[1] >>arr[2] >>n;
sort(arr, arr+3);
n-=(2*arr[2]-arr[1]-arr[0]);

if(n<0 || n%3 != 0){
	cout<<"NO" <<endl;

}
else
{
	cout<<"YES" <<endl;
}
}

	
	return 0;
}