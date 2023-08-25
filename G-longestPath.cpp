#include<bits/stdc++.h>
using namespace std;
int dp[100001];
vector<int> arr[100001];
int recur(int i){
    if(dp[i]!=-1)
        return dp[i];
    for(int j=0;j<arr[i].size();j++){
        dp[i]=max(dp[i],1+recur(arr[i][j]));
    }
    if(dp[i]==-1)
        return dp[i]=0;
    else
        return dp[i];
}
int main(){
    memset(dp,-1,sizeof dp);
    int n,e;
    int a,b;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>a>>b;
        arr[a].push_back(b);
    }
    for(int i=1;i<=n;i++){
        if(dp[i]==-1)
            recur(i);
    }
    int ma=0;
    for(int i=1;i<=n;i++){
        // cout<<dp[i]<<" ";
        if(dp[i]>ma)
            ma=dp[i];
    }
    cout<<ma<<endl;
}