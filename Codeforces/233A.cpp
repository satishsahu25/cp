#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << -1;
    }
    else{
        bool arr[n + 1] = {false};
        int arr2[n + 1];

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (arr[j] == false && i != j&&i!=n)
                {
                    arr2[i] = j;
                    arr[j] = true;
                    break;
                }
            }
        }


        if (n % 2 == 0)
        {
            for (int i = 1; i < n + 1; i++)
            {
                cout << arr2[i] << " ";
            }
        }else{
            arr2[n]=n;
            for (int i = n; i >0; i--)
            {
                cout << arr2[i] << " ";
            }

        }
    }

    return 0;
}