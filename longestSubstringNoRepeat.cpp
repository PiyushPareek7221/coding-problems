#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
	char string[200];
	int i=0,j=0, max=0;
	cin>>string;
	int n=strlen(string);
	if(n==0) {
		cout<<0;
		return 0;
	}
	vector<int>count(200,0);
	count[string[0]]++;
	cout<<count[string[0]];
	while(j!=n-1){
		if()
	}
	return 0;
}
