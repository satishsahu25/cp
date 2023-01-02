#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int lz = 0, lo = 0, ro = 0, rz = 0;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back(make_pair(x, y));
        if (x == 0)
            lz++;
        if (y == 0)
            rz++;
    }

    lo = n - lz;
    ro = n - rz;

    vector<int> v;

        v.push_back(lz + rz);
        v.push_back(lo + ro);
        v.push_back(lz + ro);
        v.push_back(lo + rz);
    

cout<<*min_element(v.begin(),v.end());
    return 0;
}