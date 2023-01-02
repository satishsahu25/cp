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
long long int powerbase(int base, int n)
{
    long long int res = 1;
    while (n)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            base = base * base;
        }
        else
        {
            n--;
            res = res * base;
        }
    }
    return res;
}

int main()
{

    int t;cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x;
        int n;
        long long int total;
        total=powerbase(2,x);
        while(n!=0){
            total=total/2;
            n--;
        }
        cout<<total<<endl;
    }

    return 0;
}