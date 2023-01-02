#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    sort(arr, arr + n);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if(arr[i]<=0){
            sum += abs(arr[i]);
        }
    }

    cout << sum;

    return 0;
}