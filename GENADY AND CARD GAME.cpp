#include <iostream>
using namespace std;
	
int main() {
	// your code goes here
string str, s;
cin>>str;
int k=0;
for(int i=0; i<5; i++){
	cin>>s;
	
if(str[0] == s[0] || str[1]==s[1])
	k=1;

}
if(k)
cout<< "YES" << endl;
else
cout<< "NO" << endl;


	
	return 0;
}

