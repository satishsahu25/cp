#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    string s;
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    int f = 0;
    for (auto ele : mp)
    {
        if (ele.second == k)
            f = 1;
        else
            f = 0;
    }

    string unit = "";
    if (f != 1)
    {
        cout << -1;
    }
    else
    {
        for (auto ele : mp)
        {
            unit += ele.first;
        }
    }

    string final;
    if ((unit.length() != 0))
    {
        for (int i = 0; (i < s.length() / unit.length()); i++)
        {
            final += unit;
        }
         cout << final;
    }

   
    return 0;
}