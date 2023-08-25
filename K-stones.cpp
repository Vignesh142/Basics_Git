#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n],f=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    //dp[i]- true if first palyer wins if there are i stones remaining
    bool dp[k+1];
    memset(dp,false,sizeof dp);
    for(int stones=0;stones<=k;stones++){
        for(int x: a){
            if(stones>=x && !dp[stones-x])
                dp[stones]=true;
        }
    }
    puts(dp[k]?"First":"Second");
}