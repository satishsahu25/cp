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
    {
        adj[v].push_back(u);
    }
}


bool CAGbydfs(vector<int> adj[], int source, bool visited[],bool dfvis[])
{

    visited[source] = true;
    dfvis[source]=true;

    for (int child : adj[source])
    {
        if (!visited[child])
        {      
            bool cycle=CAGbydfs(adj, child, visited,dfvis);
            if(cycle) return true;
        }
        else if(dfvis[child] && visited[child]){
            return true;
        }
      
    }
    dfvis[source]=false;

    return false;
}


int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj[n + 1];
    bool visited[n + 1];
     bool dfvis[n + 1]={false};

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y,false);
    }

    cout << "Cycle is " << CAGbydfs(adj, 1, visited,dfvis);

    return 0;
}
