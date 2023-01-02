#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        arr[i] = s;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].size() > 10)
        {
            // arr[i] = arr[i][0] + (arr[i].size() - 2) + arr[i][arr[i].size() - 1];
           string s1;
           s1+=arr[i][0];
            string s2=to_string((arr[i].size() - 2));
            string s3;
            s3+=arr[i][arr[i].size() - 1];
            arr[i]=s1+s2+s3;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}