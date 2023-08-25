#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partion(vector<int>&v,int low,int high)
{
    int pi=v[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(v[j]<pi)
        {
            i++;
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    int temp=v[i+1];
    v[i+1]=v[high];
    v[high]=temp;
    return i+1;
}
void quicksort(vector<int> &v,int low,int high)
{
    if(low<high)
    {
        int p=partion(v,low,high);
        quicksort(v,low,p-1);
        quicksort(v,p+1,high);
    }
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
    quicksort(v,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}