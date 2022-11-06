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
const ll N = 1'000'000'000'000L;

unordered_set<ll>cube;
void cal(){
	for(ll  i=1; i*i*i <=N; i++){
	cube.insert(i*i*i);
}

}

void solve(){
	ll x;
			cin>>x;
for(ll i=1; i*i*i<=N; i++){
	if(cube.count(x-i*i*i)){
	cout<<"YES" << endl;
	return;
}

}
cout<< "NO" <<endl;
}
int main(){
	cal();
ll t ;
	cin>> t;

while(t--){
		
solve();
}
	return 0;
}