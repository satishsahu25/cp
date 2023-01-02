#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    vector<vector<int>> vv;

    for (int i = 0; i < t; i++)
    {
        vector<int> v;
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int y;
            cin >> y;
            v.push_back(y);
        }
        vv.push_back(v);
    }


vector<vector<int>> vv2=vv;
    for (int i = 0; i < t; i++)
    {
        sort(vv[i].begin(), vv[i].end());
    }

    for (int i = 0; i < t; i++)
    {
        int max1,max2;
        max1=*(vv[i].end()-1);
        max2=*(vv[i].end()-2);
       for(int j=0;j<vv2[i].size();j++){
            if(vv2[i][j]==max1){
                cout<<vv2[i][j]-max2<<" ";
            }else{
                cout<<vv2[i][j]-max1<<" ";
            }
       }
       cout<<endl;
    }

    return 0;
}