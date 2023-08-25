#include<bits/stdc++.h>
using namespace std;
int a[100001];
int solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    set<int> s;
    s.insert(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1])
            continue;
        if(s.find(a[i])==s.end())
            s.insert(a[i]);
        else
            return 0;
    }
    cout<<a[0]<<" ";
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1])
            continue;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 1;
}
int main(){
    int t,i=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<i<<": ";
        int x=solve();
        if(x==0)    cout<<"IMPOSSIBLE"<<endl;
        i++;
    }
}