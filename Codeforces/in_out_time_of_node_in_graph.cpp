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

void addedges(vector<int> adj[], int u, int y, bool dir)
{
    adj[u].push_back(y);
    ;
    if (dir)
        adj[y].push_back(u);
}
int timer=1;
void inoutdfs(vector<int> adj[], int source, int in[], int out[], bool visited[])
{
    visited[source]=true;
    in[source]=timer++;
        cout<<source<<" ";
    for(int child:adj[source]){
        if(visited[child]!=true){
            inoutdfs(adj, child, in, out, visited);
        }
    }
    out[source]=timer++;

}

int main()
{

    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    bool visited[n + 1]={false};
    int in[n + 1]={0};
    int out[n + 1]={0};

     
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        addedges(adj, x, y, true);
    }

    inoutdfs(adj, 1, in, out, visited);
    
    for(int i=1;i<=n;i++){
        cout<<in[i]<<" "<<out[i]<<endl;
    }

    cout<<"Enter 1st and 2nd node :"<<endl;
    int n1,n2;cin>>n1>>n2;
    if((in[n1]>in[n2])&&(out[n1]<out[n2])) cout<<n1<<" lies inside "<<n2;
    else cout<<n1<<" dont lie inside "<<n2;

    return 0;
}
