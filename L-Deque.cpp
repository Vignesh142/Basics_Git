#include<bits/stdc++.h>
using namespace std;
long long int dp[3002][3002];
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    // dp[0][n-1]
    for(int l=n-1;l>=0;l--){
        for(int r=l;r<n;r++){
            if(l==r)
                dp[l][r]=a[l];
            else    
                dp[l][r]=max(a[l]-dp[l+1][r],a[r]-dp[l][r-1]);
        }
    }
    for(int i=0;i<n;i++){   
        for(int j=0;j<n;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    cout<<dp[0][n-1];
}