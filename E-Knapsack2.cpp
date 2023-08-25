#include<bits/stdc++.h>
using namespace std;
int P[101],W[101];
long long dp[101*1001];
const long long ma= 1e18L+5;
int main(){
    int n,w,sum=0;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>W[i]>>P[i];
        sum+= P[i];
    }
    for(int i=1;i<=sum;i++)
        dp[i]=ma;
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=sum;j>=P[i-1];j--){
            dp[j]=min(dp[j],W[i-1]+dp[j-P[i-1]]);
            // cout<<dp[j]<<"j "<<j<<" ";
        }
    }
    long long ans=ma;
    for(int i=sum;i>=0;i--){
        if(ans>dp[i] && dp[i]<=w){
            ans=i;
            break;
        }
    }
    cout<<ans;
}