#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, i;
    cin>>n;
    int arr[1000];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;
    while(j+1<n && arr[j]<arr[j+1]){
        j++;
    }
    while(j+1<n && arr[j]==arr[j+1]){
        j++;
    }
    while(j+1<n && arr[j]>arr[j+1]){
        j++;   
    }
    if(j==(n-1)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}
