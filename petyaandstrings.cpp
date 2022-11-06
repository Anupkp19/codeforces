#include<iostream>
#include<algorithm>
#include<string>
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
string  s1;
string s2;
cin>>s1;
cin>>s2;
int a, b;
for (int i = 0; i <s1.size(); ++i)
{
	
if(s1[i]<92){
	s1[i]+=32;
	cout<<s1[i];
}
if(s2[i]<92){
	s2[i]+=32;
}
}

if(s1==s2){
	cout<< 0;
}else if(s1<s2){
	cout<<-1;
}else if(s1 >s2){
	cout<<1;
}






	return 0;



}