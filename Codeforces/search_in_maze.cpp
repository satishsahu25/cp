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

void bfs(vector<int> adj[], bool visited[], int n, int indegree[], vector<int> &q)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j:adj[i])
        {
            indegree[j]++;
        }
    }

    queue<int> qq;
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
            qq.push(i);
    }
    while (!qq.empty())
    {
        int vertex = qq.front();
        q.push_back(vertex);
        qq.pop();
        for (int child : adj[vertex])
        {
            indegree[child]--;
            if (indegree[child] == 0)
            {
                qq.push(child);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    bool visited[n + 1] = {false};
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y, false);
    }
    bool dfsvis[n + 1] = {false};
    vector<int> q;
    int indegree[n + 1] = {0};
     bfs(adj, visited, n, indegree, q);
    if (q.size() == 0)
        cout << "Cycle is present";
    else
    {
        cout << endl
             << "TOPOSORT BY DFS" << endl;
        int i = 0;
        while (i<q.size())
        {
            cout << q[i] << " ";
            i++;
        }
    }

    return 0;
}
