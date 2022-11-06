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
int ten(int a){
	int rem=0;
	while(a!=0){
      rem +=a%10;
      a=a/10;
	}
     return rem;
}
int main(){
int k;
	cin>> k;
	int cnt=0;
	while(k){
		cnt++;
		if(ten(cnt) == 10)
			k--;
	}
	cout<< cnt << endl;
	
	return 0;
}