#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define REP(i, n) for (int i = 1; i <= n; i++)

const double PI = 3.141592653589793238460;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        if (arr[0] != arr[n - 1])
        {
            int cnt = 1;
            for (int i = 1; i < n; i++)
            {
                if (arr[0] == arr[i])
                    cnt++;
                else
                    break;
            }
            int end = 1;
            for (int i = n - 2; i > 0; i--)
            {
                if (arr[n - 1] == arr[i])
                    end++;
                else
                    break;
            }

            cout << cnt * end*2<<endl;
        }
        else
        {
            cout << n * (n - 1) / 2<<endl;
        }
    }

    return 0;
}
