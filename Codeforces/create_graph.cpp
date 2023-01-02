#include <bits/stdc++.h>
using namespace std;
#define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int,int>>
#define REP(i, n) for (int i = 1; i <= n; i++)

const double PI = 3.141592653589793238460;

int main()
{
int n;cin>>n>>e;

        // **********Adjaceny list***********

    vector<int> adj[n+1];

    for(int i=0;i<e;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // printing
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }



    // *********2D MATRIX  ******

    int arr[n+1][n+1]={0};

    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            int x,y;
            cin>>x>>y;
            arr[x][y]=1;
             arr[y][x]=1;
        }
    }

    //printning
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(int j=1;j<n+1;j++){
           if(arr[i][j]==1) cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}


