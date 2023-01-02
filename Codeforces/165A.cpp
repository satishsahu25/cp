#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vp.push_back(make_pair(x,y));
    }

    int count=0;
    for(int i=0; i < n; i++){
        int xc=vp[i].first;
        int yc=vp[i].second;
        int u=0,l=0,lf=0,rt=0;
        for(int j=0;j<n;j++){
            if(j!=i){
                if(vp[j].first<xc && vp[j].second==yc) lf++;
            else if(vp[j].first>xc && vp[j].second==yc) rt++;
            else if(vp[j].second<yc && vp[j].first==xc) l++;
            else if(vp[j].second>yc && vp[j].first==xc) u++;
            }
        }
        if(lf>0 && rt>0 && u>0 && l>0){
                count++;
                // cout<<lf<<rt<<l<<u<<endl;
                
        }
    }

    cout<<count;

    return 0;
}