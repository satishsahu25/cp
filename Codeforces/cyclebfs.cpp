#include <bits/stdc++.h>
using namespace std;

const int N=11;
queue<pair<int,int>>q;
vector<int> adj[N+1];
bool vis[N+1]={false};

bool cyclebfs(int vertex){
    q.push(vertex);
    vis[vertex]=true;
    
      while(!q.empty()){
        int current=q.front();
        q.pop();
        for(int child:adj[current]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
            }else{
                return true;
            }
        }

    }

}
int main()
{
    int n=N,m;
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
  
//   int numcycle=0;
//     for(int i=1;i<=n;i++){
//       if(vis[i]==false){
//         if(cyclebfs(i)) numcycle++;
//       }
//     }

    cout<<cyclebfs(6)<<endl;

    // cout<<endl<<"Num of cycle: "<<numcycle<<endl;


    return 0;
}