#include<bits/stdc++.h>
using namespace std;
int ma,mi;
void mergesort(vector<int> &v,int low,int high)
{
    if(low==high)
    {
        ma=max(ma,v[low]);
        mi=min(mi,v[low]);
        return ;
    }
    int mid=(low+high)/2;
    mergesort(v,low,mid);
    mergesort(v,mid+1,high);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ma=-1e9;
    mi=1e9;
    mergesort(v,0,n-1);
    cout<<"Max: "<<ma<<endl;
    cout<<"Min: "<<mi;
}