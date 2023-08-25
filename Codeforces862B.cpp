#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c=0,f=0;
    cin>>n;
    string s;
    getline(cin,s);
    vector<int> adj[n+1];
    while(getline(cin,s)){
        stringstream ss(s);
        ss>>a;
        ss>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        c++;
    }
    int d[n+1];
    memset(d,-1,sizeof d);
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int sz=q.size();
        while(sz--){
            int k=q.front();
            q.pop();
            d[k]=f;
            for(int j: adj[k]){
                if(d[j]==-1)
                    q.push(j);
            }
        }
        f= (f==0)? 1: 0;
    }
    int c1=0,c2=0;
    for(int i=1;i<=n;i++){
        if(d[i]==0)
            c1++;
        else
            c2++;
    }
    long long res=(long long)c1*c2 - c;
    cout<<res;
}