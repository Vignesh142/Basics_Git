#include<bits/stdc++.h>
using namespace std;
int dp[52][1501];
int main(){
    int n,k,p;
    cin>>n>>k>>p;
    int a[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    memset(dp,0,sizeof(dp));
    int c=1,ma,s=0;
    for(int i=1;i<=n;i++){
        s=0;
        memcpy(dp[i+1],dp[i],sizeof(dp[0]));
        for(int j=1;j<=k;j++){
            s+= a[i-1][j-1];
            for(int l=0;(l+j)<=p;l++){
                dp[i+1][l+j]=max(dp[i][l]+s,dp[i+1][l+j]);
            }
        }
        c+=1;
        cout<<endl;
    }
    cout<<dp[n+1][p]<<endl;
}
// 2 4 5
// 10 10 100 30
// 80 50 10 50  -- 250

// 3 2 3
// 80 80
// 15 50   --180
// 20 10