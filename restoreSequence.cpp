#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPrime(int n) 
{ 
	if (n <= 1) 
		return false; 
	if (n <= 3) 
		return true; 
	if (n % 2 == 0 || n % 3 == 0) 
		return false; 

	for (int i = 5; i * i <= n; i = i + 6) 
		if (n % i == 0 || n % (i + 2) == 0) 
			return false; 

	return true; 
} 
int main() {
	// your code goes here
	long int t, i, N, j,a,temp, l,k;
	long int v1[100000];
	long int v2[100000];
    j=0;
	for (int i = 2; i <= 100000; i++) { 
		if (isPrime(i))
			if(i!=0){
			v2[j]=i;
			j++; 	
			} 
	}
	cin>>t;
 	for(i=0;i<t;i++){
 	    cin>>N;
 	    for(j=0;j<N;j++){
 	        cin>>a;
 	        v1[j]=a;
 	        if(j+1==v1[j]){
 	        	cout<<v2[j]<<" ";
 			}else{
 				cout<<v2[v1[j]-1]<<" ";
 			}
 	    }
 	    cout<<endl;
 	}
	return 0;
}
