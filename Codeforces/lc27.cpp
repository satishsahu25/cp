#include <bits/stdc++.h>
using namespace std;
// #define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define REP(i, n) for (int i = 1; i <= n; i++)
typedef long long int ll;

const double PI = 3.141592653589793238460;

int main()
{
     vector<int> v1;
   v1.push_back(11);
   v1.push_back(15);
   v1.push_back(19);
   v1.push_back(21);
   v1.push_back(88);
   remove(v1.begin(),v1.end(),15);

   for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
   }
   cout<<v1.size()<<"88888"<<endl;

   vector<int> v;
   v.push_back(11);
   v.push_back(15);
   v.push_back(19);
   v.push_back(21);
   v.push_back(88);
   v.erase(v.begin()+1);

    for(int i=0;i<v1.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<v.size();

    return 0;
}