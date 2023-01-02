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

vector<int> bfs(vector<int> adj[], int source, bool visited[])
{
    queue<int> q;
    visited[source] = true;
    q.push(source);
    vector<int> v;
    while (!q.empty())
    {
        int vertex = q.front();
        // jab nikalo tabhi vector mein pushback karo
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


vector<int> shortestpath(vector<int> adj[],int source,int dest,int n){
    bool visited[n+1];
    int arr[n+1];
    queue<int> q;
    arr[source]=-1;

    q.push(source);
    visited[source]=true;
    while(!q.empty()){
        int vertex = q.front();
        q.pop();
        for(int child:adj[vertex]){
            if(!visited[child]){
                arr[child]=vertex;
                q.push(child);
                visited[child] = true;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;

    int dist=0;
    vector<int> v;
     v.push_back(dest);
    while(arr[source]!=arr[dest]){
        dest=arr[dest];
        v.push_back(dest);
        dist++;
    }

    cout<<"Shortest distance is "<<dist<<endl;
    reverse(v.begin(),v.end());
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



// /   /shortest path
    int source, dest;
    cout<<"Enter source and dest"<<endl;
    cin>>source>>dest;
    vector<int> vv=shortestpath(adj,source,dest,n);
    for(int i=0;i<vv.size();i++){
        cout<<vv[i]<<" ";
    }


    //********bfs traversal******

    // vector<vector<int>> vv;
    // cout << "BFS Traveserl" << endl;
    // bool visited[n + 1] = {false};

    // for (int i = 1; i <= n; i++)
    // {
    //     vector<int> v;
    //     if (!visited[i])
    //     {
    //         v = bfs(adj, i, visited);
    //         vv.push_back(v);
    //     }
    // }

    // for (int i = 0; i < vv.size(); i++)
    // {
    //     for (int ele2 : vv[i])
    //     {
    //         cout << ele2 << " ";
    //     }
    //     cout <<endl;
    // }


    return 0;
}
