#include <cmath>
#include <cstdio>
#include <vector>
#include<string.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[100005],new1[100005];
    cin>>s;
    int i,j=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='U' || s[i]=='u'){
            new1[j]=s[i];
            j++;
        }
    }
    j=0;
    int len2 = strlen(new1);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='U' || s[i]=='u' ){
            cout<<new1[len2-j-1];
            j++;
        }else{
            cout<<s[i];
        }
    }    
    return 0;
}
