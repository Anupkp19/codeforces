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
int h1, m1,h2,m2;
char c;
cin>>h1>>c>>m1>>h2>>c>>m2;
int h3 = h1*60+m1;
int h4 = h2*60+m2;

int h5 = (h3+h4)/2;
int ansh = h5/60;
int ansm = h5%60;

if(ansh >9 && ansm >9 ){
	cout<< ansh << ":" << ansm << endl;
}else{
	if(ansh<10){
		cout<<0;
	}
	cout<<ansh <<":";
	if(ansm <10){
		cout << 0;

	}
	cout<< ansm << endl;
}


	
	return 0;
}