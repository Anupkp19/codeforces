#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define max(a, b) (a < b ? b : a)
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
const int N  = 2e5+5;
int main(){
	
long long  n;
	cin>> n;
	vector<long long  int> arr(n);
	for(int i=1; i<=n; i++){
		cin>>arr[i];
	}


long long int sum=0;
long long  int current = 1e18;

for(int i=n; i>-1; i--){
	current = min(current-1, arr[i]);
	current = max(0LL, current);
	sum+=current ;
}
	
cout<< sum;
	return 0;
}