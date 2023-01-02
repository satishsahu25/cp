#include <bits/stdc++.h>
using namespace std;
 typedef long long int ll;

int main()
{

  ll t;cin>>t;
  for(ll l=0;l<t;l++){
      ll n;
    cin >> n;
    vector<pair<ll, ll>> vp;
    ll maxx = 1, maxy = 1;
    ll index;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        vp.push_back({x, y});
        if (x + y >= maxx + maxy)
        {
            maxx = x;
            maxy = y;
            index = i;
        }
    }

    ll peri = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i == index)
        {
            peri = peri + 2 * (vp[i].first + vp[i].second);
        }
        else
        {
            if (vp[i].first < vp[i].second)
            {
                peri = peri + 2 * (vp[i].first);
            }
            else
            {
                peri = peri + 2 * (vp[i].second);
            }
        }
    }
    cout<<peri<<endl;
  }

    return 0;
}