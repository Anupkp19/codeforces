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
int n ;
	cin>> n;
int arr[101];
for (int i = 0; i <n; ++i)
{
	cin>>arr[i];
}

int m=1001, d=0;
 d=abs(arr[0]-arr[n-1]);
m = min(m,d);
int ans1=1;
int ans2=n;
for (int i = 0; i <n; ++i)
{

	d= abs(arr[i]-arr[i+1]);
	if(m>d){
		m=d;
		ans1=i+1;
	    ans2=i+2;
	}
}
cout<<ans1 <<" " << ans2 << endl;

	return 0;
}