#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vp;

    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        vp.push_back(tmp);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if ((vp[i][0] == 1 && vp[i][1] == 1) || (vp[i][1] == 1 && vp[i][2] == 1) || (vp[i][0] == 1 && vp[i][2] == 1))
            count++;
    }

    cout << count;

    return 0;
}