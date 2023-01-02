#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<vector<int>> vv;
    for(int i=0;i<t;i++){
        vector<int>v;
        for(int j=0;j<3;j++){
                int x;cin>>x;
                v.push_back(x);
        }
        for(int j=0;j<2;j++){
            int x;cin>>x;
            v.push_back(x);
        }
        vv.push_back(v);
    }

    for(int i=0;i<t;i++){

     if(vv[i][3]<vv[i][4]){
           if(vv[i][4]-vv[i][3]>=vv[i][2]){
            cout<<1<<endl;
        }else if(vv[i][1]-vv[i][4]>=vv[i][2]){
            cout<<2<<endl;
        }else if(vv[i][3]-vv[i][0]>=vv[i][2]){
            cout<<2<<endl;
        }
        else if(vv[i][1]-vv[i][3]>=vv[i][2] &&vv[i][4]-vv[i][0]>=vv[i][2]){
            cout<<3<<endl;
        }else{
            cout<<-1<<endl;
        }
     }else if(vv[i][3]>vv[i][4]){
           if(vv[i][3]-vv[i][4]>=vv[i][2]){
            cout<<1<<endl;
        }else if(vv[i][4]-vv[i][0]>=vv[i][2]){
            cout<<2<<endl;
        }else if(vv[i][1]-vv[i][3]>=vv[i][2]){cout<<2<<endl;}
        else if(vv[i][3]-vv[i][0]>=vv[i][2] &&vv[i][1]-vv[i][4]>=vv[i][2]){
            cout<<3<<endl;
        }else{
            cout<<-1<<endl;
        }

     }else if(vv[i][3]==vv[i][4]){
        cout<<0<<endl;
     }

    }


    return 0;
}