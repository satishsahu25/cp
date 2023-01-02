#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll distance(vector<ll> adj[], ll u, ll v, ll n)

{

    

    vector<bool> visited(n, 0);

    vector<ll> dista(n, 0);

    queue<ll> queue1;

    dista[u] = 0;

    queue1.push(u);

    visited[u] = true;

    while (!queue1.empty())

    {

        ll x = queue1.front();

        queue1.pop();

        for (ll i = 0; i < adj[x].size(); i++)

        {

            if (visited[adj[x][i]])

                continue;

            // Update the distances

            dista[adj[x][i]] = dista[x] + 1;

            queue1.push(adj[x][i]);

            visited[adj[x][i]] = 1;
        }
    }

    return dista[v];
}

int main()
{

    ll n, k;
    cin >> n >> k;

    vector<ll> adj[n+1];

    for (ll i = 1; i <=n; i++)
    {
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll dist = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i + 1; j <= n; j++)
        {
            ll dis = distance(adj,i, j,n+1);
            dist = dist + pow(dis,k);
        }
    }

    cout<<dist;

    return 0;
}