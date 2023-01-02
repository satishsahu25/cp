#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<set<int>> &ans, vector<vector<int>> &adj, vector<int> vis)
{

    if (vis[node])
        return;

    for (int child : adj[node])
    {
        dfs(child, ans, adj, vis);
        for (int x : ans[child])
            ans[node].insert(x);
    }

    ans[node].insert(node+1);
    vis[node]=1;
    return;

}

bool solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    vector<vector<int>> adj(n);
    vector<set<int>> ans(n);
    vector<int> vis(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == '1')
            {
                adj[j].push_back(i);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        dfs(i, ans, adj, vis);
    }

    for (set<int> set : ans)
    {
        cout << set.size() << " ";
        for (int ele : set)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    return 0;
}