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
bool prime(int n){
for(int i=2; i<=sqrt(n); i++)
	if(n%i == 0)
			return false;

return true;
}
bool prediction(int n, int m){
for(int i=n+1; i<=m; i++){
		if(prime(i)){
			if(i==m)
				return true;
			else
				return false;
            }
        }

 return false;

}
int main(){
int  n,m;
	cin>> n>>m;
	if(prediction(n,m) == true){
cout<<"YES"<<endl;
	}else{
		cout<<"NO" <<endl;
	}

	return 0;
}