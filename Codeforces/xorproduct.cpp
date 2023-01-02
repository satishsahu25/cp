#include <bits/stdc++.h>
using namespace std;
// #define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define REP(i, n) for (int i = 1; i <= n; i++)
typedef long long int ll;

const double PI = 3.141592653589793238460;
const int mod=998244353;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> arr;
        long long prod=1;
        for (int j = 0; j < n; j++)
        {
            int y;cin>>y;
            arr.push_back(y);
            prod=((prod%mod)*(y%mod))%mod;
        }
        long long int prod2=1;
       while(prod<prod2){ 
        int xxor=0,l=0,r=0;
        for(int j=0;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if(xxor<arr[j]^arr[k]){
                    xxor=arr[j]^arr[k];
                    l=j;
                    r=k;
                }
            }
        }
        arr.erase(arr.begin()+r);
        arr.erase(arr.begin()+l);
        prod2=((prod%mod)*(xxor%mod)/arr[r]/arr[l])%mod;
        }
        cout<<prod;
    }

    return 0;
}