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
int n,t, f(0), z(0);
cin>>n;

for (int i = 0; i <n; ++i)
{
	cin>>t;
	if(t==0)
		z++;
	else if(t==5)
		f++;
}

if(z==0)
	cout<<-1<<endl;
else if(f<9){
	cout<< 0 <<endl;

}else{


	f -= f%9;
	for (int i = 0; i <f; ++i)
	   cout<<5;
	
     for (int i = 0; i < z; ++i)
      cout<<0;
     
}





	return 0;
}