#include<bits/stdc++.h>
using namespace std;
// bool compare(pair<int,int> i1,pair<int,int> i2){
//     return i1.second/i1.first > i2.second/i2.first;
// }
int main(){
    int n,sav;
    cin>>n>>sav;
    int cv[n],fv[n];
    for(int i=0;i<n;i++)
        cin>>cv[i];
    for(int i=0;i<n;i++)
        cin>>fv[i];
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        if(cv[i]<=sav && (fv[i]-cv[i])>0)
            v.push_back({cv[i],fv[i]-cv[i]});
    }
    // sort(v.begin(),v.end(),compare);
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    int dp[n][30000];
    memset(dp,0,sizeof dp);
    n=v.size();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sav;j++){
            if(v[i-1].first>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(v[i-1].second+dp[i-1][j-v[i-1].first],dp[i-1][j]);
        }
    }
    cout<<dp[n][sav]<<endl;
}
// 5 250
// 175 133 109 201 97
// 200 125 128 228 133  --55
//how to calculate factorial of a number
//