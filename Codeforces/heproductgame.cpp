#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N=10e9+7;
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int q;cin>>q;
        vector<pair<int,int>> vp;
        for(int k=0;k<q;k++){
            int x,y;
            cin>>x>>y;
            vp.push_back({x,y});
        }
        int minn=0,maxx=0,prod2=1;
         for(int w=vp[0].first-1;w<vp[0].second;w++){
                prod2=arr[w]*prod2;
            }
            minn=prod2;
            maxx=prod2;
        for(int h=1;h<vp.size();h++){ 
            int L=vp[h].first;
            int R=vp[h].second;
            ll prod=1;
            for(int w=L-1;w<R;w++){
                prod=arr[w]*prod;
            }
            if(prod>maxx) maxx=prod;
            if(prod<minn) minn=prod;
        }
        cout<<maxx-minn<<endl;
    }
    
   


    return 0;
}