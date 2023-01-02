#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<vector<int>> vv;

    for (int i = 0; i < t; i++)
    {
        vector<int>v;
        for(int j=0;j<3;j++){
                int x;cin>>x;
                v.push_back(x);
        }
        sort(v.begin(),v.end());
        vv.push_back(v);
        
    }

// cout<<"**"<<endl;
    for(int i=0;i<t;i++){
        cout<<vv[i][1]<<endl;
        // for(int j=0;j<3;j++){
        //     cout<<vv[i][j]<<" ";
        // }
        // cout<<endl;
    }


    return 0;
}