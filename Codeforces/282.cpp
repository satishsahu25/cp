#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == "X++")
        {
            x++;
        }
        else if (v[i] == "++X")
        {
            ++x;
        }
        else if (v[i] == "X--")
        {
            x--;
        }
        else
        {
            --x;
        }
    }

    cout<<x;

    return 0;
}