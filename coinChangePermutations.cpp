// ex=2 3 5 
// target = 7
// 5,2 and 5,2 and 2,2,3 and 3,2,2 and  2,3,2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target = 10;
    int n = 4, arr[4];
    int i, j, k;
    for(i=0;i<4;i++){
        cin>>arr[i];
    }
    int dp[target+1];
    dp[0]=1;
    for(i=1;i<=target;i++){
        dp[i]=0;
        for(j=0;j<4;j++){
            if(arr[j]<=i){
                dp[i]+=dp[i-arr[j]];
            }
        }
    }
    cout<<dp[target];
    return 0;
}

