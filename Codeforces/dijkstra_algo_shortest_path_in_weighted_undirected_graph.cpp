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



int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> adj[n+1];
    for (int i = 0; i < e; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        addedges(adj, x, y, w, true);
    }

    

    return 0;
}
