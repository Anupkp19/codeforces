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
int n,m;
cin>>m>>n;
int b[m][n], a[m][n], c[m][n];
for(int i=0; i<m; i++){
	for(int j=0; j<n; j++){
		cin>> b[i][j];
		a[i][j]=1;
		c[i][j]=0;
	}
}
for(int i=0; i<m; i++){
	for(int j=0; j<n; j++){
		
		if(b[i][j]==0){
			for(int k=0; k<n; k++){
				a[i][k]=0;
			}
			for(int k=0; k<m; k++){
				a[k][j]=0;
			}
		}
	}
}
for(int i=0; i<m; i++){
	for(int j=0; j<n; j++){
		
		if(a[i][j] ){
		for(int k=0; k<n; k++){
				c[i][k]=1;
			}
			for(int k=0; k<m; k++){
				c[k][j] =1;
			}
		}
		}
}
for(int i=0; i<m; i++){
	for(int j=0; j<n; j++){
		if(c[i][j] != b[i][j]){
			cout<< "NO" << endl;
			return 0;
		}
	}
}
cout<< "YES\n";
for(int i=0; i<m; i++){
	for(int j=0; j<n; j++){
		cout << a[i][j] << " ";
	}
	cout<< endl;
	
}






	return 0;
}