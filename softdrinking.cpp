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
int n,k,l,c,d,p,nl,np ;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int ans1 = k*l;

int ans2 = ans1/nl;

int ans3 = c*d;

int ans4 = p/np;


int ans6 = min(min(ans2, ans3), min(ans3, ans4));
int ans5 = min(ans3, ans4);
cout<<min(ans5, ans6)/n;
	return 0;
}