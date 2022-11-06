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
int n ;
	cin>> n;
	while(n--){
		string y;
		cin>>y;

ll a=0;
int cnt=0;
bool zero=false;
for(int i=0; i<y.length(); i++){
int s = y[i]-'0';
if(s%2 ==0) cnt++;
if(s ==0 ) zero = true;
a+=y[i];
}


if(a%3 == 0 && cnt>1 && zero){
	cout<< "red" <<endl;
}else{
	cout<<"cyan" <<endl;
}
	}
	return 0;
}