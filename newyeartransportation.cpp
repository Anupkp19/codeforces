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
int n,t;
cin>>n >> t;
vector <int> arr(n);
for(int i=0;i<n; i++){
	cin>>arr[i];
}
int ans =0;
while(ans < t-1){
	ans +=arr[ans];
}
if(ans== t-1){
	cout<<"YES" << endl;
}else{
	cout<<"NO" << endl;
}

	return 0;

}
