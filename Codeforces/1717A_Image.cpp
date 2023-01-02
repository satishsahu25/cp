#include <bits/stdc++.h>
using namespace std;

int ans(map<char, int> mp)
{
   return mp.size() - 1;
}

int main()
{
    int t;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        int arr[2][2];
        map<char, int> mp;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                char ch;
                cin >> ch;
                mp[ch]++;
            }
        }
       v.push_back(ans(mp));
    }
    for(auto ele:v){
        cout<<ele<<endl;
    }

    return 0;
}