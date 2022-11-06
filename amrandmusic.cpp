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
	cin>>n>>k;
	vector<pair<int,int>> arr;
	int c[101];
	int b,result=0;
	int sum=0;
	for (int i = 1; i <=n; ++i)
	 {
	 	cin>>b;
	 	arr.push_back(make_pair(b,i));

	 } 
	 sort(arr.begin(),arr.end());

for(int i=0; i<n; i++){

	sum+= arr[i].first;
	if(sum <= k){
		result++;
	c[i] = arr[i].second;
}
else{
	break;
}
}
cout<< result << endl;

for(int i=0; i<result; i++){
	cout<< c[i] << " ";
}


	return 0;
}
