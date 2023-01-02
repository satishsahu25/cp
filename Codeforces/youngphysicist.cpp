#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vx;
    vector<int> vy;
    vector<int> vz;

    for(int i = 0; i < n; i++){
        int x,y,z;
        cin>>x>>y>>z;
        vx.push_back(x);
        vy.push_back(y);
        vz.push_back(z);
    }

    int sx=0,sy=0,sz=0;
    for(int i=0;i<n;i++){
        sx=sx+vx[i];
        sy=sy+vy[i];
        sz=sz+vz[i];   
    }
    if(sx==0&&sy==0&&sz==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}