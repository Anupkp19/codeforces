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
int k,l,m,n,d ;
	cin>> k>>l>>m>>n>>d;

int count=d;
if(k==1 && l==1 && m==1 && n==1){

	cout<<d;
}else{
	for (int i = 1; i <=d; ++i)
	{
		if(i%k !=0 && i%l !=0 && i%m !=0 && i%n !=0)
			count--;
	}
	cout<<count<< endl;
}


	
	return 0;
}