#include<bits/stdc++.h>
using namespace std;
int P[101],W[101];
long long dp[100001];
int main(){
    int n,w;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>W[i]>>P[i];
    }
    memset(dp,0,sizeof dp);
    for(int i=0;i<n;i++){
        for(int j=w;j>=W[i];j--)
            dp[j]=max(dp[j],P[i]+dp[j-W[i]]);
    }
    cout<<dp[w];
}