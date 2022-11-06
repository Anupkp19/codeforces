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
int.parse( arr[4][4]);
int.parse(arr2[4][4]);
for(int i=1;i<=3; i++){
for (int j = 1; j <=3; ++j){
cin>>arr[i][j];
arr2[i][j]=arr[i][j];
}
}
for (int i = 1; i <= 3; ++i)
{
	for (int j = 1; j <=3; ++j){
	if(arr[i][j]!=0){
	arr2[i][j-1]+=arr[i][j];
	arr2[i][j+1]+=arr[i][j];
	arr2[i-1][j]+=arr[i][j];
	arr2[i+1][j]+=arr[i][j];

}
}

}
for (int i = 1; i <=3; ++i)
{
	for (int j = 1; j <=3; ++j)
	{
	if(arr2[i][j]%2)
		cout<<"0";
	else
		cout<<'1';
	}
	cout<<endl;
}
	return 0;

}