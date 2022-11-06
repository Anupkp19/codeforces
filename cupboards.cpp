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
int l[n],r[n];
int swap=0;
int count1=0;//0 count;
int count2=0;//1 count;
int count3=0;//0 count;
int count4=0;//1 count;
for(int i=0; i<n; i++)
{
	cin>> l[i]>> r[i];
	if(l[i]==0)
		count1++;
	if(l[i]==1)
		count2++;
	if(r[i]==0)
		count3++;
	if(r[i]==1)
		count4++;
}
swap+=min(count1, count2);
swap+=min(count3, count4);

cout<<swap<<endl;

	return 0;


}