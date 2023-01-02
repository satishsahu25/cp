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

void addedges(vector<int> adj[], int u, int v, bool dir)
{
    adj[u].push_back(v);
    if (dir)
        adj[v].push_back(u);
}

bool bipartite(vector<int> adj[],int source,int col, bool visited[], int color[]){
    visited[source] =true;
    color[source]=col;

    for(int child:adj[source]){
        if(visited[child]!=true){
            bool bipart=bipartite(adj,child,col^1,visited,color);
            if(!bipart) return false;
        }
        else{
            if(color[child]==color[source]){
                return false;
            }
        }
    }

    return true;
}


int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj[n+1];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y, true);
    }
    bool visited[n+1];
    int color[n+1];

    bool isbipartite=bipartite(adj,1,1,visited,color);
    cout<<"Graph is Bipartite "<<isbipartite;

    

    return 0;
}
