#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[6][6];
    int xl, yl;
    int flag=0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            int x;
            cin >> x;
            arr[i][j] = x;
            if (arr[i][j] == 1)
            {
                xl = i;
                yl = j;
                flag=1;
                break;
            }
        }
        if(flag==1) break;
        
    }

  

    int steps = abs(xl - 3) + abs(yl - 3);
    cout << steps;

    return 0;
}