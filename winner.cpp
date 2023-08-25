#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    int y;
    string s[n];
    string x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>x>>y;
        arr[i]=y;
        s[i]=x;
        m[s[i]]=0;
    }
    int ma=-1001;
    for(int i=0;i<n;i++){
        m[s[i]]+= arr[i];
    }
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second > ma)
            ma=it->second;
    }
    map<string,bool> m2;
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second==ma){
            m2[it->first]=true;
        }
    }
    map<string,int> m3;
    for(int i=0;i<n;i++){
        m3[s[i]]+= arr[i];
        if(m2.find(s[i])!=m2.end() && m3[s[i]]==ma){
            cout<<s[i];
            return 0;
        }
    }
}
