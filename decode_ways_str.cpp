#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i, j, k, dp[str.size()];
    dp[0]=1;
    for(i=1;i<str.size();i++){
        if(str[i-1]=='0' && str[i]=='0'){
            dp[i]=0;
        }else if(str[i-1]=='0' && str[i]!='0'){
            dp[i]= dp[i-1];
        }else if(str[i-1]!='0' && str[i]=='0'){
            if(str[i-1]=='1' || str[i-1]=='2'){
                dp[i]= i>=2?dp[i-2]:1;   
            }else{
                dp[i]=0;
            }
        }else{
            if(stoi(str.substr(i-1,i+1))<=26){
                dp[i]= dp[i-1] + (i>=2?dp[i-2]:1);   
            }else{
                dp[i]= dp[i-1];
            }
        }
    }
    cout<<dp[str.size()-1];
    return 0;
}

