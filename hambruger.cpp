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
ll nb,nc,ns;
ll pb,pc,ps;
ll lb,ls,lc;
ll fb,fc,fs;
ll solve(ll x){
fb = max(ll(0), lb*x - nb);	
 fc = max(ll(0), lc*x - nc);
 fs = max(ll(0), ls*x - ns);
ll p = fb*pb+fs*ps+fc*pc;
return p;
}
int main(){
string s ;
	cin>> s;
ll r;
cin>>nb>>ns>>nc;
cin>>pb>>ps>>pc;
cin>>r;
lb=ls=lc =0;
for (int i = 0; i < s.length(); ++i)
{
	if(s[i] == 'B') lb++;
	else if(s[i] == 'C') lc++;
	else
		ls++;
}
ll low=0;
ll high = r+1000;
int ans=0;
ll mid=0;
ll z=0;
while(low<=high){
 mid = (high+low)/2;

		z = solve(mid);
	if(z == r){
		cout<< mid <<endl;
		return 0;
	}if(z > r)
		high = mid-1;
else
		low = mid+1;
	ans=mid;
}
cout<< ans <<endl;


	return 0;
}