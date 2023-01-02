#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<pair<int, int>> vp;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }

    int cap = 0, curr = 0;

    for (int i = 0; i < vp.size(); i++)
    {
        curr = vp[i].second - vp[i].first + curr;
        if (curr > cap)
        {
            cap = curr;
        }
    }

    cout << cap;

    return 0;
}