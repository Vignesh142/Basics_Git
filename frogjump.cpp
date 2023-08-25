#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int dp[n],mi;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<n;i++){
        mi=INT_MAX;
        for(int j=(i-k)<0?0:i-k;j<i;j++){
            mi=min(mi,abs(a[i]-a[j])+dp[j]);
        }
        dp[i]=mi;
    }
    cout<<dp[n-1]<<endl;
}//5 3
// 10 30 40 50 20 -- 30
// 10 4
// 40 10 20 70 80 10 20 70 80 60  --40