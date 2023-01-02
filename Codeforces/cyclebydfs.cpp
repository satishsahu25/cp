// ***** print CYCLE dfs********
#include <bits/stdc++.h>
using namespace std;
// #define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
// #define vv vector<vector<int>> ;
#define REP(i, n) for (int i = 1; i <= n; i++)
typedef long long int ll;

const double PI = 3.141592653589793238460;

void addedges(vector<int> adj[], int u, int v, bool dir = true)
{
    adj[u].push_back(v);
    if (dir)
        adj[v].push_back(u);
}

bool dfs(vector<int> adj[], int source, bool visited[], int parent, vector<int> &v)
{
    // enter karte mask viisted
    visited[source] = true;
    v.push_back(source);
    for (int child : adj[source])
    {
        if (!visited[child])
        {
            bool cycle = dfs(adj, child, visited, source,v);
            if (cycle)
                return true;
        }
        else if (child != parent)
            return true;
    }
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
    bool cycle = false;

    bool visited[n + 1];

    vector<vector<int>> vv;
    for (int i = 1; i < n; i++)
    {
        vector<int> v;
        if (visited[i] != true)
        {
            dfs(adj, i, visited, -1, v);
            vv.push_back(v);
        }
    }

    // printing cycles
    for (auto vec : vv)
    {
        for (auto ele : vec)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}
