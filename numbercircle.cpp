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
ll n ;
	cin>> n;
	ll arr[n];
	
	for(int i=0; i<n; i++){
cin>>arr[i];
	}
	sort(arr, arr+n);
if (arr[n-1]>=arr[n-2] + arr[n-3])
{
	cout<<"NO" <<endl;
}
else{
	cout<< "YES" <<endl;
	
cout<<arr[n-1] <<" ";
for(int i=n-3; i>=0; i--) cout<<arr[i] << " ";
cout<<arr[n-2] <<endl;
}


	return 0;

}