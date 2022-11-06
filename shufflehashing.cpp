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
string p;//p=s1;
cin>>p;
string h; //h=s2;
cin>>h;
string s;//s3
cin>>s;

bool ans=0;

sort(p.begin(),p.end());
for(int i=0; i+p.size()<=h.size(); i++){
	s =h.substr(i, p.size());
   sort(s.begin(), s.end());
   if(p == s){
   	ans=1;
   	break;
   }
}
if(!ans)
	cout<<"NO" << endl;

else
cout<<"YES" <<endl;


}
	return 0;

}