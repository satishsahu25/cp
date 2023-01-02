// *****NUMBER OF CONNECTED COMPONENT, GRAPH PRINT by bfs********
#include <bits/stdc++.h>
using namespace std;
// #define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define REP(i, n) for (int i = 1; i <= n; i++)
typedef long long int ll;

const double PI = 3.141592653589793238460;

void addedges(vector<int> adj[], int u, int v, bool dir = true)
{
    adj[u].push_back(v);
    if (dir == true)
        adj[v].push_back(u);
}

vector<int> bfs(vector<int> adj[], int source, bool visited[])
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    vector<int> v;
    while (!q.empty())
    {
        int vertex = q.front();
        v.push_back(vertex);
        q.pop();
        for (int child : adj[vertex])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }

    return v;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y, true);
    }

    bool visited[n + 1] = {false};

    vector<vector<int>> vv;
    for (int i = 1; i <= n; i++)
    {
        vector<int> v;
        if (!visited[i])
        {
            v = bfs(adj, i, visited);
            vv.push_back(v);
        }
    }
    for (auto v : vv)
    {
        for (auto ele : v)
        {
            cout << ele << " ";
        }
        cout<<endl;
    }
    return 0;
}
