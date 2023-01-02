#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    vector<char> vc;
    for (int i = 0; i < s.length(); i++)
    {
        vc.push_back(s[i]);
        // cout<<s[i]<<" ";
        i++;
    }
    

    sort(vc.begin(), vc.end());

    for (int i = 0; i < vc.size(); i++)
    {
       if(i!=vc.size()-1)  cout << vc[i] << "+";
       else  cout << vc[i];
    }

    return 0;
}