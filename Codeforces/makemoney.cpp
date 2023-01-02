#include <bits/stdc++.h>
using namespace std;
// #define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define REP(i, n) for (int i = 1; i <= n; i++)
typedef long long int ll;

const double PI = 3.141592653589793238460;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x, c;
        cin >> n >> x >> c;
        int arr[n];
        int initsum = 0;
        for (int j = 0; j < n; j++)
        {
            int y;
            cin >> y;
            arr[j] = y;
            initsum += y;
        }
        sort(arr, arr + n);
        if (x > c)
        {
            int newsum = 0;
            int f = 0, k = 0;
            while (1)
            {
                newsum = initsum - arr[k] + x - c;
                if (initsum < newsum)
                {
                    initsum = newsum;
                    arr[k] = x;
                    k++;
                }
                else
                {
                    break;
                }
            }
            cout << initsum << endl;
        }
    }

    return 0;
}