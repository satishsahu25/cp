// *****NUMBER OF CONNECTED COMPONENt , GRAPH PRINT by dfs********
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
    if (dir)
        adj[v].push_back(u);
}

void printgraph(vector<int> adj[], int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        cout << i << "->";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> dfs(vector<int> adj[], int source, bool visited[], vector<int> &v,int parent)
{

    visited[source] = true;
    v.push_back(source);
    for (int child : adj[source])
    {
        if (!visited[child])
        {
            parent=source;
            dfs(adj, child, visited, v,parent);
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
    printgraph(adj, n);

    // dfs
    vector<vector<int>> vv;
    bool visited[n + 1] = {false};
    bool cycle=false;
    for (int i = 1; i < n + 1; i++)
    {
        vector<int> v;
        if (visited[i] != true)
        {
            v = dfs(adj, i, visited, v,-1);
            vv.push_back(v);
        }
    }

    // num of componennt
    for (auto comp : vv)
    {
        for (int ele : comp)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}
