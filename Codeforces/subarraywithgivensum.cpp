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

  vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int l=0,r=1;
        vector<int> v;
        long long int currsum=arr[0];
        
        for(int i=1;i<n;i++){
            currsum=currsum+arr[i];
            while()
          
        }
    }

int main()
{

    vector<int> v,vr;
    int n;
    ll s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    vr=subarraySum(v,n,s);
    cout<<vr[0]<<" "<<vr[1];

    return 0;
}