#include<bits/stdc++.h>
using namespace std;
long long dp[100001][3];
int main(){
    int n;
    cin>>n;
    memset(dp,0,sizeof dp);
    int x,y,z;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        dp[i+1][0]=x+max(dp[i][1],dp[i][2]);
        dp[i+1][1]=y+max(dp[i][0],dp[i][2]);
        dp[i+1][2]=z+max(dp[i][0],dp[i][1]);
    }
    cout<<max(max(dp[n][0],dp[n][1]),dp[n][2]);
}