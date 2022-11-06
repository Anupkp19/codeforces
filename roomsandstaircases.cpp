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
int t;
cin>>t; 
while(t--){
    int n;
    cin>>n;
    string s;
    cin>> s;
 
int result = n;
int l=-1;
int r=-1;
 
for(int i=n-1; i>=0; i--){
    if(s[i] == '1'){
        r = i+1;
    
    break;
}
}
for(int i=0; i<n; i++){
    if(s[i] == '1'){
        l=i+1;
    break;
}
}
int k=0;
if(l!=-1){
    k = (n-l+1) + max(l, n-l+1);
result= max(result, k);
 
k = (n-r+1) + max(r, n-r+1);
result = max(result,k);
 
 
}
cout<< result << endl;
 
}
    return 0;
 
}