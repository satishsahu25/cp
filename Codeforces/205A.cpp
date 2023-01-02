#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
       mp.push_back({i+1,x});
    }
    sort(mp.begin(),mp.end(),false);

    if(mp[0].second==mp[1].second) cout<<"Still Rozdil";
    else{
        cout<<mp[0].first;
    }



    return 0;
}