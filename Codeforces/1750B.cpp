#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
   
   int t;cin>>t;
   for(int m=0;m<t;m++){
     ll n;
    cin >> n;
    string s;
    cin >> s;
    ll one = 0, zero = 0;

    ll maxconzero = 0, maxconone = 0;
    set<int> sone, szero;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            zero++;
            maxconzero++;
            sone.insert(maxconone);
            maxconone = 0;
        }
        else
        {
            one++;
            szero.insert(maxconzero);
            maxconzero = 0;
            maxconone++;
        }
    }
    sone.insert(maxconone);
    szero.insert(maxconzero);
    ll maxxone = *max_element(sone.begin(), sone.end());
    ll maxxzero = *max_element(szero.begin(), szero.end());


    vector<ll> ans;
    ans.push_back(one * zero);
    ans.push_back(maxxone * maxxone);
    ans.push_back(maxxzero * maxxzero);

    cout<<*max_element(ans.begin(),ans.end())<<endl;
   }
    

return 0;
}