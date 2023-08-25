#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n) {
        int i=0;
        while(i<n){
            if(arr[i]>0 and arr[i]<=n and arr[i]!=arr[arr[i]-1]){
                int t=arr[i];
                arr[i]=arr[arr[i]-1];
                arr[arr[i]-1]=t;
            }
            i++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1)
                return i+1;
        }
        return n+1;
}
int main(){
    int arr[]={0,1};
    cout<<missingNumber(arr,2);
}