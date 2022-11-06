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
int n, m;
cin>>n>>m;
int ans=-1;
if(m%n ==0){
	ans=0;

int d=m/n;
while(d%2 == 0)
	d/=2, ans++;
while(d%3 == 0)
	d/=3, ans++;
		
if(d != 1)
ans=-1;
}
cout<< ans << endl;


	return 0;
}