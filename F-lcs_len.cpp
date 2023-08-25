#include<bits/stdc++.h>
using namespace std;
int dp[3001][3001];
int main(){
    memset(dp,0,sizeof dp);
    string s1,s2;
    cin>>s1>>s2;
    int x=s1.length(),y=s2.length();
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else    
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    // cout<<dp[x][y];
    int i=x,j=y;
    string s="";
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            s=s1[i-1]+s;
            i--;
            j--;
        }else if(dp[i-1][j]>dp[i][j-1])
            i--;
        else
            j--;
    }
    cout<<s;
}