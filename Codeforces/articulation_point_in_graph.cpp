#include <bits/stdc++.h>
using namespace std;

void addedges(vector<int> adj[], int x, int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void dfs(bool visited[], int source, int disc[], int low[], vector<int> adj[], int parent, int timer, int arcpoint[])
{

    visited[source] = true;
    low[source] = disc[source] = timer++;
    int numconn = 0;
    for (int child : adj[source])
    {
        if (child == parent)
            continue;

        if (!visited[child])
        {
            dfs(visited, source, disc, low, adj, parent, timer, arcpoint);
            low[source] = min(low[source],low[child]);

            // check articulation  point
            if (low[child] >= disc[source] && parent!= -1)
            {
                arcpoint[source]=1;
            }
            numconn++;
        }
        else
        {
            // back edge
            low[source] = min(low[source], disc[child]);
        }
    }
    // handling the separate case of starting point of dfs
    if (parent == -1 && numconn > 1)
    {
        arcpoint[source]=1;
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    vector<int> adj[n + 1];
    bool visited[n + 1] = {false};
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y);
    }

    int disc[n + 1] = {-1};
    int low[n + 1] = {-1};
    int timer = 0;
    int  arcpoint[n+1]={0};

    for(int i=1;i<=n;i++){
       if(visited[i]!=true)
        dfs(visited, i, disc, low, adj, -1, timer, arcpoint);  
    }

    for (int ele : arcpoint)
    {
        cout << ele << " ";
    }

    return 0;
}