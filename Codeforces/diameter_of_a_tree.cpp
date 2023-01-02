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

void addedges(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(vector<int> adj[], int source, bool visited[], int distarray[])
{
    visited[source] = true;
        cout<<source<<" ";  
        for (int child : adj[source])
    {
        if (visited[child] != true)
        {
            distarray[child] = distarray[source] + 1;
            dfs(adj, child, visited, distarray);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    bool visited[n + 1]={false};
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y);
    }

    int distarray[n + 1] = {0};
    distarray[1] = 0;
    dfs(adj, 1, visited, distarray);
    cout<<endl;


    int maxdepth=0,maxnode;
    for(int i=1;i<=n;i++){
        if(maxdepth<distarray[i]){
            maxdepth=distarray[i];
            maxnode=i;
        }
    }
    maxdepth=0;
    cout<<maxnode<<endl;
    bool visited2[n+1]={false};
    int distarray2[n+1]={0};
    distarray[maxnode]=0;
    dfs(adj, maxnode, visited2, distarray2);
    for(int i=1;i<=n;i++){
        if(maxdepth<distarray2[i]){
            maxdepth=distarray2[i];
        }
    }

    cout<<endl<<maxdepth;



    return 0;
}
