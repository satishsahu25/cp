#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    vector<int> v;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    //   for (int i = 0; i < m; i++)
    // {
    //     cout<<v[i]<<endl;
    // }



    int diff = *max_element(v.begin(), v.begin() + 3) - *min_element(v.begin(), v.begin() + 3);
    for (int i = 0; i<= m-n; i++)
    {
        int maxx = *max_element(v.begin() + i, v.begin() + i + n);
        int minn = *min_element(v.begin() + i, v.begin() + i + n);
    //    cout<<maxx-minn<<"*"<<endl;
        if (diff >= maxx - minn)
        {
            diff = maxx - minn;
        }
    }

    cout << diff;

    return 0;
}