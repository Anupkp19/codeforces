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

ll w,h,n;

bool good(ll  x){
	return (x / w)*(x / h) >= n;
}


int main(){

 
	cin>> w >> h >>n;

ll l=0;
ll r=1;
while(!good(r)){
	r*=2; 
}
while(r>l+1){
ll a = (l+r)/2;
if(good(a)){
	r=a;
}else{
	l=a;
}

}

cout<< r<< endl;
	return 0;

}