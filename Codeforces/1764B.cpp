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
            int y;
            cin >> y;
            v.push_back(y);
        }
        vv.push_back(v);
         v.empty();
    }



    for (int i=0;i<vv.size();i++)
    {
        for (int x = 0; x < vv[i].size()-1; x++)
        {
            for (int y = x + 1; y < vv[i].size(); y++)
            {

                int diff = vv[i][y] - vv[i][x];
               std::vector<int>::iterator it;
               it=std::find(vv[i].begin(), vv[i].end(), diff);
                if (it!= vv[i].end())
                {
                       continue;               
                }else{
                    vv[i].push_back(diff);   
                }              
            }
        }
    }


cout<<"***"<<endl;
    for (auto ele : vv)
    {
        // cout<<ele.size()<<endl;
        for(int i=0;i<ele.size();i++){
            cout<<ele[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}