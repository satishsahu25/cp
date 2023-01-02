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

void addedges(vector<int> adj[], int u, int v, bool dir = 1)
{

    adj[u].push_back(v);
    if (dir == 1)
        adj[v].push_back(u);
}

bool cyclebfs(vector<int> adj[], int source, int vertexes, bool visited[], vector<int> &bfstraverse)
{
    unordered_map<int, int> mp;
    queue<int> q;
    q.push(source);
    mp[source] = -1;
    visited[source] = true;
    while (!q.empty())
    {
        int vertex = q.front();
        bfstraverse.push_back(vertex);
        q.pop();
        for (int child : adj[vertex])
        {
            if (visited[child] && child != mp[vertex])
            {
                return true;
            }
            else if (!visited[child])
            {

                q.push(child);
                mp[child] = vertex;
                visited[child] = true;
            }
        }
    }
    return false;
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
    vector<int> bfstraverse;

    for(int j=1;j<=n;j++){
       if(visited[j]==false){
          cout << cyclebfs(adj, j, n + 1, visited, bfstraverse)<<endl;
       }
    }

    cout<<"BFS Traversal"<<endl;
    for (int ele : bfstraverse)
    {
        cout << ele << " ";
    }

    return 0;
}
