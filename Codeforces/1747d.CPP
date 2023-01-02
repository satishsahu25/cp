#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, q;
    vector<pair<ll, ll>> vp;
    cin >> n >> q;
    vector<ll> vele;
    ll size = vele.size();

    for (ll t = 0; t < n; t++)
    {
        ll x;
        cin >> x;
        vele.push_back(x);
    }

    for (ll i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }

    for (ll j = 0; j < q; j++)
    {

        ll L, R;
        L = vp[j].first;
        R = vp[j].second;

        ll xxor = vele[L - 1];
        for (ll t = L; t < R; t++)
        {
            xxor = xxor ^ vele[t];
        }
        if (xxor == 0)
        {
            if (L != R)
            {
                if ((R - L) % 2 == 0)
                {
                    cout << 1 << endl;
                }
                else if((R - L) % 2!=0 && R-L>1)
                {
                    cout << 2 << endl;
                }else  if((R - L) % 2!=0 && R-L<=1){
                    cout<<-1<<endl;
                }
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}