#include <bits/stdc++.h>
using namespace std;
// #define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int,int>>
#define REP(i, n) for (int i = 1; i <= n; i++)
typedef long long int ll;

const double PI = 3.141592653589793238460;

int main()
{

    int t;cin>>t;
    vector<string> v;
    for(int i=0;i<t;i++){
        int x,y;cin>>x>>y;
        if(x>y) v.push_back("LOSS");
        if(x<y) v.push_back("PROFIT");
        if(x==y) v.push_back("NEUTRAL");
    }
    for(int i=0;i<t;i++){
        cout<<v[i]<<endl;
    }




    return 0;
}