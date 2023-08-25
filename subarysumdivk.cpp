#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int a[k],ans=0,s=0;
    memset(a,0,sizeof a);
    a[0]=1;
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(a[s%k]==0)
            a[s%k]=1;
        else{
            ans+= a[s%k];
            a[s%k]++;
        }
    }
    cout<<ans;
}
// 3 10
// 5 15  20  -3