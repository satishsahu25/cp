#include <bits/stdc++.h>

using namespace std;

void bellmann(vector<vector<int>> adj, int n,int e, int source)
{

    int dist[n + 1] = {INT_MAX};
    dist[source] = 0;

    // n-1 times
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= e; j++)
        {
            int u = adj[j][0];
            int v = adj[j][1];
            int wt = adj[j][2];
            if (dist[u]!=INT_MAX &&(dist[u] + wt < dist[v]))
            {
                dist[v] = dist[u] + wt;
            }
        }
    }

// nth relaxation for negative cycle
    int f = 0;
    for (int j = 1; j <= e; j++)
    {
        int u = adj[j][0];
        int v = adj[j][1];
        int wt = adj[j][2];
        if (dist[u]!=INT_MAX &&(dist[u] + wt < dist[v]))
        {
            f=1;
            break;
        }
    }
    if(f==1) cout<<"Negative cycle hai"<<endl;
    else{
        for(int i=1;i<=n;i++){
                cout<<dist[i]<<" ";
        }
    }

    
}
int main()
{

    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj;
    for (int i = 0; i < e; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        v.push_back(wt);
        adj.push_back(v);
    }
    bellmann(adj,n,e,1);

    return 0;
}