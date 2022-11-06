#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, arr[8]={0};
    cin>>n;
	for(int i=1; i<=7; i++){
		cin>>arr[i];
		arr[i] += arr[i-1];
	}
	n = (n-1) % arr[7] + 1;
	for(int i=1; i<=7; i++){
		if(arr[i] >= n){
			cout<< i << endl;
			break;
		}
	}
	return 0;
}