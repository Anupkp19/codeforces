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
int t;
	cin>> t;
	ll n,k;
	while(t--){
		cin>>n>>k;
ll low =1;
ll high = INT_MAX;
int ans=0;
while(low<=high){
	ll mid = (low+high)/2;

	int sol = mid - mid/n;

	if(sol >k){
		high = mid-1;
	}else if (sol<k){
		low = mid+1;
	}else{
      ans=mid;


       high =  mid-1;
	}
}
cout<< ans << endl;


	}
	return 0;
}