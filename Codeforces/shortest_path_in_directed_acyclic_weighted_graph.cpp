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

void addedges(vector<pair<int, int>> adj[], int u, int v, int w, bool dir)
{
    adj[u].push_back({v, w});
    if (dir)
        adj[v].push_back({u, w});
}

void printDAWG(vector<pair<int, int>> adj[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << "->";
        for (auto ele : adj[i])
        {
            cout << "[" << ele.first << "," << ele.second << "] ";
        }
        cout << endl;
    }
}

bool shortestpathinDAWG(vector<pair<int, int>> adj[], int n, int source, bool visited[], bool dfsvis[], stack<int> &ss)
{

    visited[source] = true;
    dfsvis[source] = true;

    for (auto child : adj[source])
    {
        if (!visited[child.first])
        {
            bool cycle = shortestpathinDAWG(adj, n, child.first, visited, dfsvis, ss);
            if (cycle)
                return true;
        }
        else if (dfsvis[child.first])
        {
            return true;
        }
    }
    dfsvis[source] = false;
    ss.push(source);
    return false;
}


void getshortestpath(int source,int distarray[], stack<int> ss,int n,vector<pair<int,int>> adj[]){
    distarray[source] =0;
      while (!ss.empty())
        {
            int top = ss.top();
            ss.pop();

            if (distarray[top] != INT_MAX)
            {
                for (auto child : adj[top])
                {
                    
                    if (distarray[child.first] > distarray[top] + child.second)
                    {
                        distarray[child.first]=distarray[top] + child.second;
                    }
                }
            }
        }
        cout << "Distances below" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << distarray[i] << " ";
        }
}


int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> adj[n + 1];
    for (int i = 0; i < e; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        addedges(adj, x, y, w, false);
    }
    printDAWG(adj, n);

    bool visited[n + 1] = {false};
    bool dfsvis[n + 1] = {false};

    int source, start = 1;
    stack<int> ss;
    // cout<<"Enter source"<<endl;
    // cin>>source;

      int distarray[n + 1];
    for (int i = 1; i <= n; i++)
    {
        distarray[i] = INT_MAX;
    }
    // distarray[1] = 0;
    if (shortestpathinDAWG(adj, n, start, visited, dfsvis, ss))
    {
        cout << "Cycle is present";
    }
    else
    {
        // cout<<"Topo Sort"<<endl;
        // while (!ss.empty())
        // {
        //     cout << ss.top() << " ";
        //     ss.pop();
        // }
        // cout << endl;
        int source=1;
      getshortestpath(source,distarray,ss,n,adj);
    }
    return 0;
}
