#include <bits/stdc++.h>
using namespace std;

const int N=6;
bool vis[N+1];
vector<int> adj[N+1];

vector<int>  bfstraverse;

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source] = true;

    while(!q.empty()){
        int current=q.front();
        bfstraverse.push_back(current);
        q.pop();
        for(int child:adj[current]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
            }
        }

    }


}

 
int main()
{
    int n=N,m;
    cin>>m;
    // taking edges
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // printing the graph
    for(int i=1;i<=n;i++){
        cout<<i<<"->";
        for(int ele:adj[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    //bfs

     bfs(6);
   
   for(int i=0;i<N;i++){
    cout<<bfstraverse[i]<<" ";
   }

    return 0;
}