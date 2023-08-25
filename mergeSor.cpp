#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=v[i+low];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=v[mid+j+1];
    }
    int i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(left[i]<right[j])
        {
            v[k++]=left[i++];
           
        }
        else
        {
            v[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        v[k++]=left[i++];
    }
    while(j<n2)
    {
        v[k++]=right[j++];
    }
}
void mergesort(vector<int> &v,int low,int high)
{
    if(low>=high)
    {
        return ;
    }
    int mid=(low+high)/2;
    mergesort(v,low,mid);
    mergesort(v,mid+1,high);
    merge(v,low,mid,high);
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
    mergesort(v,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}