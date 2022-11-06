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
ll gcd(ll a, ll b){
	return b ?  gcd(b, a%b) : a;
}
int main(){
ll  t ;
cin>> t;

ll n;
ll answer=0;
ll answer1=1;
while(t--){
cin>>n;
// for (ll i=0; i <=n; ++i)
// {
// 	if(gcd(i+1, i+2) >= answer)
// 		answer=gcd(i, i+1);
// 	 if(gcd(i+1, n-i)>= answer)
// 	 	answer1= gcd(i+1,n-i);
// }
if(n%2 ==0){
cout<<n/2 <<endl;
}else{
	cout<<(n-1)/2 <<endl;
}
}

	return 0;
}