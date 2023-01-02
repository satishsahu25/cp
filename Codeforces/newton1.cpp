#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int md = 998244353;

ll power(ll a, ll n)
{
    ll ans = 1;
    a %= md;
    while (n)
    {
        if (n % 2 == 1)
            ans = (a * ans) % md;
        a = (a * a) % md;
        n = n / 2;
    }
    return ans % md;
}

int main()
{
    ll n, m;
    cin >> n >> m;

    ll ans = 0;
    while (m >= 1)
    {
        ll pc = __builtin_popcount(m);
        ll t = power(2, pc) - 1;
        if (t < 0)
            t += md;
        ans = (ans + power(t, n - 1)) % md;
        m--;
    }
    cout << ans << "\n";

    return 0;
}