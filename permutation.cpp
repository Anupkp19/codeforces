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
int n;
	cin>> n;
	int arr[n];
for (int i = 1; i <= n; ++i)
{
	arr[i]=i;
}
	if(n%2==0){
// while(n!=1){
// 	swap(arr[i+1],arr[i]);
// n/=2;
// }
for (int i = 1; i <=n; ++i)
{
	if(arr[i]==i){
swap(arr[i+1],arr[i]);

	}

	cout<<arr[i] << " ";
}

     	}else{
		  cout<<-1<<endl;
	}
	return 0;
}