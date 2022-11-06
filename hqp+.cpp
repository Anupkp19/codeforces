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
string s;
cin>>s;
//sort(s.begin(), s.end());
int count=0;
for(int i=0; i<s.size(); i++){
if(s[i] == 'H' || s[i]== 'Q' || s[i] == '9')
	count++;
}	
if(s.size()==1){
if(s == "H" || s== "Q" || s=="9")
cout<<"YES";
else
	cout<<"NO";
}else {
if(count>0)
	cout<<"YES";
else
	cout<<"NO";
return 0;
}
}