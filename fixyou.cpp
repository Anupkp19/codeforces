#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
 cin>> t;
while(t--){

	
	
	int  n,m;
	char arr[101][101];
   for(long long i=0; i<n; i++){
   	for(long long j=0; j<m; j++){
   		cin>> arr[i][j];
   	}
   }
int count=0;   
   for(int i=0; i<n-1; i++){
   	for(int j=m-1; j<m; j++){
   		if(arr[i][j] == 'R'){
   			count++;
   		
   		arr[i][j]='D';
   	}
   	}
   }
   for(int i=n-1; i<n; i++){
   	for(int j=0; j<m-1; j++){
   		if(arr[i][j]=='D'){
   			count++;
   		
   		arr[i][j]='R';
   	}
   	}
   }
   
   cout<< count<< endl;
   
}

return 0;
}