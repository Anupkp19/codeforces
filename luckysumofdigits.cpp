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
int c=0;
while(n>=4 &&  n%7!=0){
	c++;
	n=n-4;
}

if(n%7 ==0){
	for(int i=0; i<c; i++)
		cout<< 4;
	for(int j=0; j<n/7; j++)
		cout<< 7;

}else{
	cout<< -1 << endl;
	
}
	
	 
	return 0;
}