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
int n ,x,y;
cin>>n>>x>>y;

vector<int> arr(n);
for(int i=0; i<n; i++){
 cin>> arr[i];
 } 
 for(int i=0; i<n; i++){
 	bool flag =false;

//left
 	for(int j=i-1; j>=i-x && !flag && j>=0; j--){
 		if(arr[j] <= arr[i]) flag =true;
    }

if(flag) continue;

//right
 	for(int j=i+1; j<n && j<=i+y && !flag; j++){
 		if(arr[j] <= arr[i]) 
            flag = true;
    }


if(!flag){
	cout<< i+1 << endl;

return 0;
}
 }
	

	return 0;

}