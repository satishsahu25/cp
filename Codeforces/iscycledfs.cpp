#include <bits/stdc++.h>
using namespace std;

const int N=8;
vector<int> adj[N+1];
bool vis[N+1]={false};


bool cycledfs(int vertex,int parent){
    vis[vertex]=true;
    bool loopexists=false;
    for(int child:adj[vertex]){       
          
        if(vis[child]==true&&child!=parent) return true;
        if(vis[child]==true&&child==parent) continue; 
        loopexists=loopexists|cycledfs(child,vertex);

    }

    return loopexists;
}


int main()
{

    int n=N,m;
    cin>>m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
        bool loopexist=false;
        for(int i=1;i<=n;i++){
            if(vis[i]) continue;
            if(cycledfs(i,0)){
                loopexist=true;
                break;
            }
        }

    cout<<loopexist<<endl;

    return 0;
}