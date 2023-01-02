#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// ll checkgcdone(ll a, ll b)
// {

//     if (a == b)
//         return a;
//     if (a > b)
//         checkgcdone(a - b, b);
//     else
//         checkgcdone(a, b - a);
// }

// ll gcd(int a, int b)
// {
//     ll res;
//     if (a > b)
//         res = a - b;
//     else
//         b - a;
//     while (res != 0)
//     {
//         if (a % res == 0 && b % res == 0)
//             return res;
//         else
//             res--;
//     }
// }

int main()
{
    ll t;
    cin >> t;
   
    for (ll i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll gcd[n+1]={0};
     
        for (ll j = 0; j < n; j++)
        {    cin>>arr[j];
            gcd[j+1]=__gcd(gcd[j],arr[j]);
        }

        if(gcd[n]==1) cout<<0<<endl;
        else{
            if(__gcd(__gcd(n,arr[n-1]),gcd[n-1])==1){
                cout<<1<<endl;
            }
            else if(__gcd(__gcd(n-1,arr[n-2]),gcd[n-2])==1){
                 cout<<2<<endl;}
                else cout<<3<<endl;
            }
        }
        
    

    return 0;
}

// void testCases()
// {
//  int n;cin>>n;
//  vector<int> v(n);
//  int gcD[n+1]={0},ans=0;
// for(int i=0;i<n;i++){
//     cin>>v[i];
//     gcD[i+1]=__gcd(gcD[i],v[i]);
// }
 
//  if(gcD[n]==1)cout<<ans;
//  else{
//     int pt=n-1;
//     while(pt>=0){
//         int tgcd=__gcd(v[pt],pt+1);
//         if(__gcd(gcD[n],tgcd)==1){
//             ans=n-pt;
//             break;}
//             pt--;
//     }
//     cout<<(ans<3?ans:3);
//  }




//  cout<<"\n";



// }
 
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
//  int t; cin>>t;
//  while(t--)testCases();
 
//  return 0;
// }