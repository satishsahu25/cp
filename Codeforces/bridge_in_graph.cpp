#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793238460;

void addedges(vector<int> adj[], int x, int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void dfs(vector<int> adj[], int source, bool visited[], int parent, int disc[], int low[], int timer, vector<vector<int>> &v)
{
    visited[source] = true;
    disc[source] = low[source] = timer++;
    for (int child : adj[source])
    {
        if(child==parent) continue;
        if (visited[child] != true)
        {
            dfs(adj, child, visited, source, disc, low, timer, v);
            //returning ke baad ka
            low[source] = min(low[source], low[child]);

                //bridge check
            if (low[child] > disc[source])
            {
                vector<int> vv;
                vv.push_back(child);
                vv.push_back(source);
                v.push_back(vv);
            }
        }
         // backedges ie if visited then we check
        else if (visited[child] == true)
        {
           
            low[source] = min(low[source], disc[child]);
        }
    }
}
int main()
{

    int n, e;
    cin >> n >> e;
    bool visited[n + 1] = {false};
    vector<int> adj[n + 1];

    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y);
    }
    int timer = 0;
    int disc[n + 1] = {-1};
    int low[n + 1] = {-1};
    vector<vector<int>> v;

    for( int i=1;i<=n;i++){
            if(visited[i]==false)
            dfs(adj, 1, visited, -1, disc, low, timer, v);
    }

    for (auto child : v)
    {
        for (int ele : child)
        {
            cout << ele << " ";
        }
    }

    return 0;
}
