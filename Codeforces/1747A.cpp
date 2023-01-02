#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{

    ll t;cin>>t;
    vector<vector<ll>> vv;
    for(ll i=0;i<t;i++){
         ll x;cin>>x;
         vector<ll> v;
         for(ll j=0;j<x;j++){
             ll y;cin>>y;
             v.push_back(y);
         }
         vv.push_back(v);

    }

    for(ll i=0;i<t;i++){
        ll pos=0,neg=0;
        // int sum=0;
        for(ll ele:vv[i]){
            if(ele<=0){
                neg=neg+ele;
            }else{
                pos=pos+ele;
            }
            // sum=sum+ele;
        }
        cout<<abs(abs(pos)-abs(neg))<<endl;
    }

    return 0;
}