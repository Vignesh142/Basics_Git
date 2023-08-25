#include<bits/stdc++.h>
using namespace std;
int m=1e9 +7;
string a[1001];
int dp[1000][1000];
int recur(int h,int w){
    if(h==0 && w==0)
        return 1;
    if(h<0 || w<0 || a[h][w]=='#')
        return 0;
    if(dp[h][w]!=-1)
        return dp[h][w];
    return dp[h][w]=(recur(h-1,w)+recur(h,w-1))%m;
}
int main(){
    memset(dp,-1,sizeof dp);
    int h,w;
    cin>>h>>w;
    for(int i=0;i<h;i++)
        cin>>a[i];
    cout<<recur(h-1,w-1);
}