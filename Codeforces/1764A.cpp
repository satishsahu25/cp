#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<vector<int>> vv;

vector<int>v;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int y;cin>>y;
            v.push_back(y);
        }
        vv.push_back(v);
        v.empty();
    }

vector<pair<int,int>> vp;
    for(int i=0;i<t;i++){
        int r=vv[i].size();
        vp.push_back({1,r});
    }


for(int i=0;i<t;i++){
    cout<<vp[i].first<<" "<<vp[i].second<<endl;
}




    return 0;
}