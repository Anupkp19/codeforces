#include<iostream>
#include <bits/stdc++.h>
using namespace std;
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
int main(){
int t ;
	cin>> t;
int d;
	while(t--){
cin>>d;
vector<int>v;

for(int i=d+1; ;i++){
	int t=1;
	for(int j=2; j*j<=i; j++){
		if(i%j == 0){
			t=0;
			break;
		}
	}

	if(t){
		v.push_back(i);
		break;
}
	
}
for(int i=v.back()+d; ;i++){
	int t=1;
	for(int j=2; j*j<=i; j++){
		if(i%j == 0){
			t=0;
			break;
		}
	}
	if(t){
		v.push_back(i);
		break;
}
	
}

cout<< min(1ll*v[0]*v[1], 1ll*v[0]*v[0]*v[0]) <<endl;

}
}