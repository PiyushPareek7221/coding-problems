// ex=4 2 7 1 3
// target = 10
// ans = 1 (true means possible)  
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target = 10;
    int n = 5, arr[5];
    int i, j, k;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    int dp[n+1][target+1];
    for(i=0;i<6;i++){
        for(j=0;j<11;j++){
            if(i==0 && j==0){
                dp[i][j]=1;
            }else if(i==0){
                dp[i][j]=0;
            }else if(j==0){
                dp[i][j]=1;
            }else{
                if(dp[i-1][j]==1){
                    dp[i][j]=1;
                }else{
                    int val = arr[i-1];
                    if(j>=val){
                        if(dp[i-1][j-val]==1){
                            dp[i][j]=1;
                        }else{
                            dp[i][j]=0;
                        }
                    }else{
                        dp[i][j]=0;
                    }
                }
            }
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[5][target];
    
    return 0;
}

