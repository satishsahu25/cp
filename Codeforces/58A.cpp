#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string test = "hello";

    int count = 0,j=-1;
    for (int i = 0; i < test.length(); i++)
    {   j++;
        while (j<s.length())
        {
            if (s[j] == test[i])
            {
                count++;
                break;
            }
            j++;
        }
        if(count==5) break;
    }

    if(count==5){ cout<<"YES";}
    else cout<<"NO";

    return 0;
}