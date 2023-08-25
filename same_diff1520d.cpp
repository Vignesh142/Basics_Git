#include<iostream>
#include<map>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        map<long ,long> m;
        long long int ans=0;
        for(int i=0;i<n;i++){
            ans+= m[arr[i]-i];
            m[arr[i]-i]++;
        }
        cout<<ans<<endl;
    }
}