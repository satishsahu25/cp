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
    if (dir) adj[v].push_back(u);
}

vector<int> kahnsalgorithm(vector<int> adj[], int n)
{

    vector<int> topo;
    vector<int> indegree(n+1, 0);

    //finding indegree
    for (int i = 1; i <= n; i++)
    {
        for (int j:adj[i])
        {
            indegree[j]++;
        }
    }
    

    //push 0 indegree wale
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0) q.push(i);
    }

    // do bfs
    while (!q.empty())
    {
        int vertex = q.front();
        // /topo store
        topo.push_back(vertex);
        // throw out after use from queue must nahi toh queue kabhi empty nahi hoga
        q.pop();
        for (int child : adj[vertex])
        {
            indegree[child]--;
            if (indegree[child]==0)
            {
                q.push(child);
            }
        }
    }

    return topo;
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
    v = kahnsalgorithm(adj, n);
    // kahnsalgorithm(adj, n);

    if(v.size()==0){
        cout<<"Cycle is present in Directed graph";
    }else{
        for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    }

    return 0;
}