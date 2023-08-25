#include<bits/stdc++.h>
using namespace std;
double dp[3000],a[3000];
int n;
int main(){
    cin>>n;
    double x=1,ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    memset(dp,0,sizeof dp);
    dp[0]=1;
    //dp[i]-- prob that there are i heads so far
    for(int i=0;i<n;i++){
        for(int j=i+1;j>=0;j--){
            dp[j]= (j==0?0:dp[j-1]*a[i])+dp[j]*(1-a[i]);
        }
    }
    for(int head=0;head<=n;head++){
        int tail=n-head;
        if(head>tail){
            ans+= dp[head];
        }
    }
    cout<<fixed<<setprecision(10)<<ans;
}