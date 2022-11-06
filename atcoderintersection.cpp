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
int l1,r1,l2,r2 ;
	cin>> l1>>r1>>l2>>r2;
	int answer=0;
	int arr[100];
		arr[l1]= l1;
		arr[r1] = r1;
		arr[l2] = r2;
		arr[r2] = l2;
  

	
	for (int i = l2; i <r2; ++i)
	{
      if(arr[i] == r1 )
	    answer= abs(r2-r1);
		
	}
	for (int i = l1; i <r1; ++i)
	{
      if(arr[i] == r2)
	    answer= abs(r2-r1);
		
	}
	if(r1 ==l2){
		cout<<0;
	}else{

cout<<answer;
}

	return 0;
}