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
string longestCommonPrefix(vector<string> &strs)
{
    int f=0;
    string st="";
    for (int i = 0; i < strs[0].length(); i++){
        char ch=strs[0][i];
        for(int j=0;j<strs.size();j++){
            if(strs[j][i]!=ch){
                    f=1;
                    break;
            }
        }
        if(f==1) break;
          st=st+ch;
    }
    return st;
}
int main()
{

    return 0;
}