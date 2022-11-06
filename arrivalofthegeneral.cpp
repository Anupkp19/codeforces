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
int n ;
	cin>> n;
	int maxvalue=0;
	int minvalue =10000;
	int minindex=0;
	int maxindex=0;
for(int i=0; i<n; i++){
	int x;
	cin>>x;
if(x>maxvalue){
	maxvalue=x;
	maxindex=i;
}if(x<=minvalue){
	minvalue=x;
	minindex=i;
}

}
if(maxindex>minindex){
	cout<<(maxindex-1) + (n-minindex)-1;
}else{
	cout<<(maxindex-1) + (n-minindex);
}
}