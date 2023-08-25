#include<iostream>
using namespace std;
int a[100001],n,k;
bool check(int D){
    int k2=0;
    for(int i=1;i<n;i++){
        int d=a[i]-a[i-1];
        k2+= (d-1)/D;
        if(k2>k)    return false;
    }
    return true;
}
void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int low=1,high=a[n-1]-a[0];
    while(low<high){
        int mid=(low+high)/2;
        if(check(mid))  high=mid;
        else    low=mid+1;
    }
    cout<<low<<endl;
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
