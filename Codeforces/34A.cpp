#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    int s1=0, s2=1;
    int mindiff = abs(arr[0] - arr[1]);
    for (int i = 0; i < n; i++)
    { 
        for (int j = 2; j < n; j++)
        {
            if (abs(arr[i] - arr[j]) <= mindiff)
            {   s1 = i;
                s2 = j;
                mindiff = abs(arr[i] - arr[j]);               
            }
        }
    }

        cout << s1+1 << " " << s2+1 ;

    return 0;
}