#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(k==a[mid]){
            cout<<mid;
            return 0;
        }else if(k>a[mid])
            low=mid+1;
        else if(k<a[mid])
            high=mid-1;
    }
    cout<<-1;
}