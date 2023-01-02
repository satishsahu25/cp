#include <bits/stdc++.h>
using namespace std;

const int N=50;
vector<int> adj[N];

bool vis[N];

void dfs(int vertex){
    //after entering  vertex
    //we can return or perform action on that vertex
    cout<<vertex<<" ";
    vis[vertex]=true;
    for(int child:adj[vertex]){
    // before visiting the child
        if(vis[child]!=true){
            dfs(child);
            //after visiting the child
        }else{
            continue;
        }
    }
    // before entering the vertex

}

int main()
{
    
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    dfs(1);





    return 0;
}