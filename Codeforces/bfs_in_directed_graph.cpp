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

vector<int> kahnsalgorithm(vector<int> adj[], int source, bool visited[])
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
                visited[child] = true;
                q.push(child);
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
        addedges(adj, x, y, false);
    }

    vector<int> v;
    bool visited[n + 1];
    v = kahnsalgorithm(adj, 1, visited);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}