#include <bits/stdc++.h>
using namespace std;
// sliding window maximum
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    int i, arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=4;
    int nge[n];
    st.push(n-1);
    nge[n-1] = n;
    for(i=n-2;i>=0;i--){
        while(st.size()>0 && arr[i]>arr[st.top()]){
            st.pop();
        }
        if(st.size()==0){
            nge[i]=n;
        }else{
            nge[i]=st.top();
        }
        st.push(i);
    }
    for(i=0;i<n;i++){
        cout<<arr[nge[i]]<< " ";
    }
    cout<<endl;
    for(i=0;i<=n-k;i++){
        int j=i;
        while(nge[j]<i+k){
            j = nge[j];
            // cout<<'d';
            
        }
        cout<<arr[j]<<" ";
    }
    return 0;
}

