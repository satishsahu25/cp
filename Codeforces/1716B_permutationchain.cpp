#include <bits/stdc++.h>
using namespace std;

void perm(int arr[], int n)
{

     for (int j = 1; j <= n; j++)
        {
            arr[j - 1] = j;
            cout<<j<<" ";
        }
        cout<<endl;
    for (int i = n - 2; i >= 0; i--)
    {
        int temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;

        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        perm(arr, n);
    }
    return 0;
}