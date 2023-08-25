#include<bits/stdc++.h>
using namespace std;
char m[1001][1001];
int dist[1001][1001];
int li,lj,r,c,k;
void bfs(int i,int j){
    queue<pair<int,int>> q;
    vector<pair<int,int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
    q.push({i,j});
    memset(dist,-1,sizeof dist);
    dist[i][j]=0;
    k=0;
    while(!q.empty()){
        int s=q.size();
        while(s--){
            int a=q.front().first,b=q.front().second;
            q.pop();
            for(auto dir: dirs){
                int x=a+ dir.first;
                int y=b+ dir.second;
                if(x<0 or x>=r or y<0 or y>=c)
                    continue;
                if(dist[x][y]==-1 and m[x][y]=='.'){
                    dist[x][y]=1+ dist[a][b];
                    q.push({x,y});
                    if(dist[x][y]>k){
                        li=x,lj=y;
                        k=dist[x][y];
                    }
                }
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>c>>r;
        int a=0,b=0,f=1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>m[i][j];
                if(f and m[i][j]=='.')
                    a=i,b=j,f=0;
            }
        }
        bfs(a,b);
        memset(dist,-1,sizeof dist);
        bfs(li,lj);
        cout<<"Maximum rope length is "<<k<<".\n";
    }
}