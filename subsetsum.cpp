#include<bits/stdc++.h>
using namespace std;
int dp[101][10001];
int fun(vector<int> &arr,int n,int s)
{
    if(s==0)
        return 1;
    if(n<=0)
        return 0;
    if(dp[n][s]!=-1)
        return dp[n][s];
    if(arr[n-1]>s)
        return dp[n][s]=fun(arr,n-1,s);
    else
    return dp[n][s]=fun(arr,n-1,s)+fun(arr,n-1,s-arr[n-1]);
}
void isSubsetSum(vector<int>& arr, int s)
{
    memset(dp,-1,sizeof dp);
    int n=arr.size();
    int res=fun(arr,n,s);
    cout<<res;
    // if(res>0)
    // cout<<"true";
    // else
    // cout<<"false";
}
int main()
{
    int n,x;
    cin>>n;
    string st;
    vector<int> v;
    getline(cin,st);
    cout<<st;
    // for(int i=0;i<n;i++){
    //     cin>>st;
    //     cout<<st<<" x";
    // }
    // int s;
    // cin>>s;
    // cout<<s;
    // isSubsetSum(v,s);
    cout<<"s";
}