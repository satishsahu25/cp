#include <bits/stdc++.h>
using namespace std;
// #define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int,int>>
#define REP(i, n) for (int i = 1; i <= n; i++)
typedef long long int ll;

const double PI = 3.141592653589793238460;

int main()
{

    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        string s;cin>>s;
        unordered_map<string,int> mp;
        // int ans=0,len=0;
        pair<int,int> ans={0,0};
        for(int j=0;s[j]!='\0';j++){
            string t="";
            t+=s[i];
            mp[t]++;
            int cnt=1,i_j=j;
            //  if(mp[t]>ans.first && cnt>=ans.second)ans={mp[t],cnt};
             while(j+1<s.length() && s[j]==s[j+1]){
                      j++;
             }
             
            // if()
           

        }
    }



    return 0;
}