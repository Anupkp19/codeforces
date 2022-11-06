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
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int i=0;
		int result=0;
		int result2=0;
		for (int i = 0; i <n; ++i)
		{
			cin>>arr[i];
		}

		for (int i = 0; i < n; ++i)
		{
		   if(arr[i]%2 != i%2){
		   if(i%2 ==0 ){
		   	result++;
		   }else{
		   	result2++;
		   }
		}
	}

	if(result!=result2){
		cout<<-1<<endl;
	}else{
	cout<< result2 << endl;
	}
}
	return 0;
}