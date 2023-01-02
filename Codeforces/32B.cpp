#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    
    // vector<int> num;

    string st="";

    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i] == '-' && s[i + 1] == '-')
        {
            // num.push_back(2);
            // st=st+'2';
            cout<<"2";
            i=i+1;
            continue;
            
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            // num.push_back(1);
            // st=st+'1';
            i=i+1;
             cout<<"1";
            continue;
        }
        else if (s[i] == '.')
        {
            // num.push_back(0);
            // st=st+'0'; 
             cout<<"0"; 
        }
    }

   cout<<st;

    return 0;
}