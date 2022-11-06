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
int n,k ;
	cin>> n>>k;
	vector<int> v(n);
	for (int i = 0; i <n; ++i)
	{
		cin>>v[i];

	}
for(int i=0; i<k; i++){
	int k;
	cin>>k;
	int result=0;
	int l=-1;
	int h= n;
	while(h>l+1){
		int mid = (l+h)/2;
		if(v[mid]<= k){
			l=mid;
}else{
	h=mid;
}
}
	cout<< l+1 << endl;

}

	return 0;
}