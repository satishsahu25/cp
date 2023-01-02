#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        arr[i] = s;
    }

  
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        string test = arr[i];
        for (int j = 0; test[j] != '\0'; j++)
        {
            mp[test[j]]++;
        }
    }

    int eq = (*mp.begin()).second;
    int f = 0;

    for (auto it=mp.begin(); it != mp.end();it++)
    {
        if (eq != (*it).second && it!=mp.begin()){
            f = 1;
            break;
        }
            
    }

    string namesofteams;
    if (f == 1)
    {
        int maxValue = 0;

        pair<char, int> p;
        for (auto ele : mp)
        {
            if (maxValue < ele.second)
            {
                maxValue = ele.second;
                p = ele;
            }
        }
        cout << p.first << endl;
    }
    else
    {
        for (auto ele : mp)
        {
            namesofteams = namesofteams + ele.first;
        }
        cout << namesofteams << endl;
    }

    return 0;
}