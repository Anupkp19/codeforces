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
ll sum(ll n)
{
	return (n * (n+1)) / 2;
}

// sum: s s+1 s+2 ... e
ll sum(ll s, ll e)
{
	if(s <= 1)
		return sum(e);

	return sum(e) - sum(s-1);
}

ll minSplitters(ll k, ll n)
{
	ll st = 1, en = k;

	while(st < en)
	{
		ll md = (st + en)/2;
		ll s = sum(md, k);

		if(s == n)
			return k - md + 1;

		if(s > n)
			st = md+1;
		else
			en = md;
	}

	return k - st + 2;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("c.in", "rt", stdin);
	//freopen(".txt", "wt", stdout);
#endif

	ll n, k;
	cin>>n>>k;

	if(n == 1)
		cout<<0<<"\n";		// already just 1 out flow source exist
	else if(n <= k)
		cout<<1<<"\n";		// we have 1-n splitter already
	else
	{
		--k;
		--n;

		if(sum(k) < n)
			cout<<-1<<"\n";
		else
			cout<<minSplitters(k, n)<<"\n";
	}


 	return 0;
}