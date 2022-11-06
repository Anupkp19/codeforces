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
int t ;
	cin>> t;
 long long low,high;
 while(t--){
 	cin>>low>>high;
 	int l=1;
 	int r = high;
 	int count=0;
 	while(l<r){
 		int mid = l+(r-l)/2;
 		if(r == (l+mid)){
           count++;
 		} else if( r> (l+mid)){
 			l = mid+1;

 		}else{
 			r = mid-1;
 		}
 	}
 	cout<< count << endl;
 }
	return 0;
}