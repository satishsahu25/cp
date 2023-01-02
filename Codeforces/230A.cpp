#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> vp;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }

    // sorting the vector of pairs
    // for (int i = 0; i < n; i++)
    // {
    //     int vf=vp[i].first;
    //     for (int j = 1; j < n; j++)
    //     {
    //         if (vp[j].first <= vf)
    //         {
    //             pair<int,int> temp = vp[j];
    //             vp[j] = vp[i];
    //             vp[i] = temp;
    //         }
    //         vf=vp[j].first;
    //     }
    // }


    // according to first
    
    sort(vp.begin(), vp.end());

    // cout << endl
    //      << "Sorted" << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << vp[i].first << " ";
    //     cout << vp[i].second << endl;
    // }

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (s >= vp[i].first )
        {
            s = s + vp[i].second;
            f = 1;
        }
        else
        {
            f = 0;
            break;
        }
    }

    if (f == 0)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}