#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
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


//ja par bhi altenating sequence aata hah wahah par flag use karna hota hah
int main(){
int n ;
	cin>> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
bool flag=0;

for(int j=0; j<n; j++){
	float k = (double)arr[j]/2;

if((arr[j]%2) != 0){

	if(flag==0){
	arr[j] = ceil(k);
	flag=1;
}
else if(flag==1){
	arr[j] = floor(k);
		flag=0;
}

}
else
arr[j] = arr[j]/2;


}
for(int i=0; i<n; i++){
	cout<< arr[i] << endl;
}	

return 0;

}

