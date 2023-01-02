#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{
    int arr2[n];
    for (int i = 0; i < n; i++)
        arr2[i] = arr[i];

    sort(arr2, arr2 + n);
    int minn[2], maxx[2];
    for (int i = 0; i < n; i++)
    {
        if (arr2[0] == arr[i])
            minn[0] = i;
        if (arr2[1] == arr[i])
            minn[1] = i;
        if (arr2[n - 2] == arr[i])
            maxx[0] = i;
        if (arr2[n - 1] == arr[i])
            maxx[1] = i;
    }

    int l = min(maxx[0], maxx[1]);
    int r = max(minn[0], minn[1]);

    int maxlr = *max(arr + l, arr + r);
    int minlr = *min(arr + l, arr + r);

    int maxlt = *max(arr, arr + l);
    int minlt = *min(arr, arr + l);

    int maxrt = *max(arr + l + 1, arr + n);
    int minrt = *min(arr + l + 1, arr + n);

    int minf = min(minlt, minrt);
    int maxf = max(maxlt, maxrt);

    return maxlr + maxf - minf - minlr;
}

int main()
{
    int t;
    cin >> t;
    int ansarr[t];
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ansarr[i] = solve(arr, n);
    }
    for (int i = 0; i < t; i++)
        cout << ansarr[i] << endl;

    return 0;
}