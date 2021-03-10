#include<iostream>
using namespace std;
int main(){
	int arr[20], curr_sum=0, max_sum=0, n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	max_sum=arr[0];
	for(int i=0;i<n;i++){
		curr_sum+=arr[i];
		max_sum=max_sum>curr_sum?max_sum:curr_sum;
		if(curr_sum<0){
			curr_sum=0;
		}
	}
	cout<<max_sum;
	return 0;
}
