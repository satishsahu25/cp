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
        vv.push_back(v);
        
    }

     for(int i=0;i<t;i++){
        if(vv[i][0]>=vv[i][1]+vv[i][2]+2 || (vv[i][0]==vv[i][1]&& vv[i][0]==vv[i][2])){
           cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
       
    }





    return 0;
}