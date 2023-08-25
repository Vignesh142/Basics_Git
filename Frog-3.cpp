#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long int dp[n],mi;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<n;i++){
        mi=1e18;
        for(int j=0;j<i;j++){
            mi=min(mi, +dp[j]);
        }
        dp[i]=mi;
    }
    cout<<dp[n-1]<<endl;
}