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

bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (st.empty()|| (s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '[')||(s[i] == '}' && st.top() != '{'))
        {
            return false;
        }
        else
        {
            st.pop();
        }
    }
   return st.empty()?true:false;
}
int main()
{

    return 0;
}