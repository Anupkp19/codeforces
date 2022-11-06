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
int n,m ;
	cin>>n;

	int arr[n];
	int cnt =0;

	int sum=0;
	int count[n+1];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		sum+=arr[i];
		count[i] = sum;
	}
	int index=0;
	int ab[sum+1];
	for(int i=1; i<=sum; i++){
    if(i > count[index])
    	index++;
    ab[i] = index+1;

 
	}

	cin>>m;
	int t;
	for (int i = 0; i <m; ++i)
	{
		cin>>t;
		cout<<ab[t] << endl;

	}


	return 0;
}