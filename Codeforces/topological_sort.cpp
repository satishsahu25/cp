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

bool toposort(vector<int> adj[], int source, bool visited[], bool dfsvis[],stack<int> &ss)
{
    visited[source] = true;
    dfsvis[source] = true;
    for (int child : adj[source])
    {
        if (!visited[child])
        {
             bool cycle=toposort(adj, child, visited, dfsvis,ss);
             if(cycle) return true;
        }
        else if (dfsvis[child])
        {
            return true;
        }
    }
    dfsvis[source] = false;
    ss.push(source);
    return false;
}

int main()
{

    int n, e;
    cin >> n >> e;

    bool visited[n + 1];
    vector<int> adj[n + 1];
    bool dfsvis[n + 1] = {false};

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y, false);
    }
    stack<int> ss;
    cout<<toposort(adj, 1, visited, dfsvis,ss)<<endl;

    while(!ss.empty()){
        int x;
        x=ss.top();
        cout<<x<<" ";
        ss.pop();
    }
    return 0;
}
