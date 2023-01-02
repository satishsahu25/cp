#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    int v[n+1];

    for(int i=1; i<n+1;i++){
        int x;cin>>x;
        v[i]=x;
    }


    int minn=1,maxx=1,maxe=v[1],mine=v[1];
    for(int i=2;i<n+1;i++){
        if(v[i]>maxe) {
            maxe=v[i];
            maxx=i;
        }
         if(mine>=v[i]) {
            mine=v[i];
            minn=i;
        }
    }

if(maxx>minn) cout<<maxx-1+n-minn-1;
else cout<<maxx-1+n-minn;
    
  

    return 0;
}