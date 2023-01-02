#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<vector<int>> vpv;

    for (int i = 0; i < t; i++)
    {
        int m, s;
        cin >> m >> s;
        vector<int>v;
        v.push_back(m);
        v.push_back(s);

        for (int j = 2; j < m + 2; j++)
        {
            int y;
            cin >> y;
            v.push_back(y);
        }
        vpv.push_back(v);
    }

    for (int i = 0; i < t; i++)
    {
        
        int sum = 0;
        for (int j = 2; j < vpv[i].size(); j++)
        {
            sum += vpv[i][j];
        }
        sum = sum + vpv[i][1];

        int k=1,flag=0;
        while(k)
        {
            if((k*(k+1)/2)==sum){
                flag=1;
                break;
            }
            if((k*(k+1)/2)>sum){
                    flag=0;
                    break;
            }
            k++;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}