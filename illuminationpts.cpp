#include<bits/stdc++.h>
using namespace std;
int a[100001];
int m,r,i,n,ans;
long long solve(){
    cin>>m>>r>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    ans=0;
    long long prev=0;
    for(i=0;i<n;i++){
        if((a[i]-r)<=prev){
            while(i<n && (a[i]-r)<=prev){
                i++;
            }
            if(i==n || (a[i]-r)>prev)
                i-=1;
            ans+=1;
            prev=a[i]+r;
            if(prev>=m)
                return ans;
        }
        else
            return 0;
    }
    return 0;
}
int main(){
    int t,i=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<i<<": ";
        long long x=solve();
        if(x==0)    cout<<"IMPOSSIBLE"<<endl;
        else    cout<<x<<endl;
        i++;
    }
}
