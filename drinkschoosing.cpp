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
int n,k;
	cin>> n>>k;
	map<int,int> mpp;
	for(int i=0; i<n; i++){
		int ans;
		cin>>ans;
		mpp[ans]++;
	}
	int result=0;
	int answer=0;
	for(pi pair : mpp){
     result += pair.S%2;
     answer += pair.S /2 * 2;
 }

     answer+= (result+1)/2;

     cout<< answer<< endl;
	return 0;
}