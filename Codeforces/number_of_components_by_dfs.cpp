#include <bits/stdc++.h>
using namespace std;

const int N = 8;
vector<int> adj[N + 1];
bool vis[N + 1];

vector<vector<int>> vv;
vector<int> cuv;

void componentsdfs(int vertex)
{
    vis[vertex] = true;
    cuv.push_back(vertex);

    for (int child : adj[vertex])
    {
        if (vis[child] != true)
        {
            componentsdfs(child);
        }
        else
        {
            continue;
        }
    }
}

int main()
{
    int n = N, m;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    int numcompo = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] != true)
        {
            cuv.clear();
            componentsdfs(i);
            vv.push_back(cuv);
            numcompo++;
        }
        else
        {
            continue;
        }
    }

    cout << "Number of Component " << numcompo << endl;

    cout<<"Components are"<<endl;

    for(int i=0;i<vv.size();i++){
        for(int ele:vv[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return 0;
}