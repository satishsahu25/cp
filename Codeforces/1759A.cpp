#include <bits/stdc++.h>
using namespace std;

int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

int main()
{
    int t;
    cin >> t;
    vector<string> vs;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    }

string full="";
   
    for(int i=0;i<18;i++){
full=full+"Yes";
    }

    for (int i = 0; i < t; i++)
    {
        if(isSubstring(vs[i],full)==-1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}