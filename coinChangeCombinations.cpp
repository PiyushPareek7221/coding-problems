// ex=2 3 5 
// target = 2
// 5,2 and 2,2,3 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target = 7;
    int n = 3, arr[3];
    int i, j, k;
    for(i=0;i<3;i++){
        cin>>arr[i];
    }
    int dp[target+1];
    dp[0]=1;
    for(i=1;i<=target;i++){
        dp[i]=0;
    }
    for(i=0;i<3;i++){
        for(j=arr[i];j<=target;j++){
            
                dp[j] += dp[j-arr[i]];
        }
    }
    cout<<dp[target];
    return 0;
}

