#include<bits/stdc++.h>
using namespace std;
bool vis[100001];
int a[100001];
void dfs(int i,vector<int> adj[],int &mi){
    vis[i]=true;
    for(int j: adj[i]){
        if(!vis[j]){
            mi=min(mi,a[j]);
            dfs(j,adj,mi);
        }
    }
}
int main(){
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(vis,false,sizeof vis);
    int mi;
    long long res=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            mi=a[i];
            dfs(i,adj,mi);
            res+= mi;
        }
    }
    cout<<res;
}