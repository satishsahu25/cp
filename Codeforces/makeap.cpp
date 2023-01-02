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
    vector<int> v;
    for(int i = 1; i <= t; i++){
        int a,c;cin>>a>>c;
        int A=a;
        if((c-A)%2==0){
            v.push_back(A+(c-A)/2);
        }else{
            v.push_back(-1);
        }        
    }
     for(int i = 0; i < t; i++){
       cout<<v[i]<<endl;   
    }



    return 0;
}