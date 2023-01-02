#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define REP(i, n) for (int i = 1; i <= n; i++)

const double PI = 3.141592653589793238460;

void addedges(vector<int> adj[], int u , int v, bool dir){
    adj[u].push_back(v);
    if(dir) adj[v].push_back(u);
}

void ssspdfs(vector<int> adj[],int n,int source, bool visited[],int arrdist[]){
    visited[source]=true;
    vector<int> v;
    for(int child: adj[source]){
        if(visited[child]!=true){
            arrdist[child]=arrdist[source]+1;
            ssspdfs(adj,n,child,visited,arrdist);
        }
    }

}
int main()
{
   int n,e;cin>>n>>e;
   vector<int> adj[n+1];
   bool visited[n+1]={false};

   for(int i=0;i<e;i++){
    int x,y;cin>>x>>y;
    addedges(adj,x,y,true);
   }
   int arrdist[n+1]={0};
    arrdist[3]=0;
  
   ssspdfs(adj,n,3,visited,arrdist);

   for(int i=1;i<n+1;i++){
    cout<<arrdist[i]<<" ";
   }

    

    return 0;
}
