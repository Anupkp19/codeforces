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
//ll mx = LONG_LONG_MIN;
ll solve(int w, int h){
	ll x=0,y=0;
	for (int i = 0; i <4; ++i)
	{
	     int k;
	     cin>>k;
	     ll a,b;
	     for(int j=0; j<k; j++)
	     	cin>>((j==0)?a:b);

	     	if(i<=1)
	     		x=max(x,b-a);
	     	else
	     	y=max(y,b-a);
	     
	}
	return max(x*h, y*w);


}



int main(){
int t ;
	cin>> t;

while(t--){
	int w,h;
cin>>w>>h;
 ll ans = solve(w,h);
cout<<ans <<endl;
}
	return 0;

}