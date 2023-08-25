#include<bits/stdc++.h>
using namespace std;
int a[100001];
void solve(){
    int n,b,ans=0;
    cin>>n>>b;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        b-=a[i];
        if(b>=0){
            ans+=1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t,i=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<i<<": ";
        solve();
        i++;
    }
}