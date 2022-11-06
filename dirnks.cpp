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
int a ;
	cin>> a;
	int arr[a];

	float sum=0;
	double result=0;
	for (int i = 0; i <a; ++i)
	{
	         cin>>arr[i];
	         sum+=arr[i];
	}

	result  = sum/a;
cout<<setprecision(12);
	cout<<result<<endl;
	return 0;
}