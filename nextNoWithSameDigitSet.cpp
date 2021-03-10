#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n, s, r, c=0, p, i=0,j, digit;
	cin>>n;
	p=n;
	while(p!=0){
		r=p%10;
		c++;
		p=p/10;
	}
	int arr[c];
	s=c-1;
	while(n!=0){
		digit = n/pow(10, s);
		arr[i]=digit;
		i++;
		r=pow(10,s);
		n=n%r;
		s--; 
	}
	s=0;
	r=0;
	for(i=0;i<c;i++){
		if(arr[i]<arr[i+1]){
			s++;	
		}else if(arr[i]>arr[i+1]){
			r++;
		}
	}
	if(s==(c-1)){
		int temp;
		temp=arr[c-1];
		arr[c-1]=arr[c-2];
		arr[c-2]=temp;
		for(i=0;i<c;i++){
			cout<<arr[i]<<" ";
		}
		
	}else if(r==c){
		cout<<"not possible";
	}else{
		r=0;
		for(i=c-1;i>=0;i--){
			if(arr[i]>arr[i-1]){
				int temp = arr[i-1];
				arr[i-1]=arr[c-1];
				arr[c-1]=temp;
				r=i;
				break;
			}
		}
		for(i=r;i<c-1;i++){
			for()
		}
	}
	
}
