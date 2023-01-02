#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{

    ll t;cin>>t;
    for(int i=0;i<t;i++){
        ll n,q;
        cin>>n>>q;
        int arr[n];
        for(ll j=0;j<n;j++){
            ll x;cin>>x;
            arr[j]=x;
        }
        ll arrq[q][4];
        for(ll k=0;k<q;k++){
                    
                for(ll d=0;d<4;d++){
                    ll a;cin>>a;
                    arrq[k][d]=a;
                }
            
        }
    
        for(ll l=0;l<q;l++){
            ll sz=arrq[l][1]-arrq[l][0]+1;
            ll sub1[sz];
            ll sub2[sz];
            sort(sub1,sub1+sz);
            sort(sub2,sub2+sz);
            ll differ=0;
            for(ll w=0;w<sz;w++){
                if(sub1[w]!=sub2[w]) differ++;           
            }
            if(differ<=1) cout<<"Yes"<<endl;   
            else cout<<"No"<<endl;
        }

    }
    
   


    return 0;
}