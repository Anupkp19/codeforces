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
ll digit(ll no){
        ll cnt = 0 ;
        while(no){
            ++ cnt ;
            no /= 10 ;
        }
        return cnt ;
    }
ll cal(ll pow ,ll cnt){
        ll no = pow ;
        while(digit(no) < cnt){
            no *= pow ;
        }
        return no ;
    }
int main(){
int t ;
	cin>> t;
	int a,b,c;
	while(t--){
cin>>a>>b>>c;
ll d = a-c+1;
ll e = b-c+1;
cout<< cal(2, d) << string(c-1,'0') << " "<< cal(3,e) <<string(c-1,'0')<<endl;

	}
	return 0;
}