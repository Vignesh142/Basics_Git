#include<bits/stdc++.h>
using namespace std;
long long int n,x;
int solve(){
    cin>>n;
    int c=1;
    x=26;
    if(x<26)
        return n;
    while(x<n){
        c+=1;
        x+=26*c;
    }
    x-=c*26;
    n-=x;
    float x=n;
    // cout<<n<<' ';
    return ceil(x/c);
}
int main(){
    int t,i=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<i<<": ";
        int x=solve();
        cout<<char(64+x)<<endl;
        i++;
    }
}