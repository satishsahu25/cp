#include <bits/stdc++.h>
using namespace std;

void addedges(vector<int> adj[], int x, int y)
{
    adj[x].push_back(y);
}
void topo(bool visited[], vector<int> adj[], int source, stack<int> &st)
{
    visited[source] = true;

    for (int child : adj[source])
    {
        if (visited[child] != true)
        {
            topo(visited, adj, child, st);
        }
    }

    st.push(source);
}

void dfs(bool visited2[], vector<int> adj[], int source,vector<int> &v)
{
    visited2[source]=true;
    v.push_back(source);
    for(auto child:adj[source]){
        if(visited2[child] != true){
            dfs(visited2, adj, child,v);
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    vector<int> adj[n + 1];
    bool visited[n + 1] = {false};

    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y);
    }

    stack<int> sorted;

    // topologcal sort

    topo(visited, adj, 1, sorted);

    //  while (!sorted.empty())
    // {
    //     int top = sorted.top();
    //     cout<<top<<" ";
    //     sorted.pop();
        
    // }

    vector<int> transposed[n + 1];

    // transposed
    for (int i = 1; i <= n; i++)
    {
        // visited[i] = false;
        for (auto ele : adj[i])
        {
            transposed[ele].push_back(i);
        }
    }
    bool visited2[n+1]={false};
    int count=0;
    vector<vector<int>> vv;
    while (!sorted.empty())
    {
        int top = sorted.top();
        sorted.pop();
        if (visited2[top] != true)
        {   
            count++;
            vector<int>v;
            dfs(visited2, transposed, top,v);
            vv.push_back(v);
        }
    }
    cout<<"Number of SCC :"<<count;
    cout<<endl;

    for(auto ele1:vv){
        for(auto ele2:ele1){
            cout<<ele2<<" ";
        }
        cout<<endl;
    }

    return 0;
}