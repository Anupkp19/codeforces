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
string findLcm(string str1, string str2)
{
    string x = str1, y = str2;
    while (x.length() != y.length()) {
        if (x.length() < y.length())
            x += str1;
        else
            y += str2;
    }
 
    if (x == y)
        return x;
    return "";
}
int main(){
int q ;
	cin>> q;
	while(q--){
	string s,t;
	cin>>s>>t;
	string ans = findLcm(s,t);
	if(ans!=""){
		cout<< ans <<endl;
	}else{
		cout<< -1<<endl;
	}

}
	return 0;

}