#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int arr[m];

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        count=count+arr[i]-1;
    }

    return 0;
}