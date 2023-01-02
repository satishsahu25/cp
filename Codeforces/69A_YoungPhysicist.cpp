#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int arr[t][3];

    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            arr[j][i]=x;
        }
    }

      
    // checking for equllibirium

        int sumx=0,sumy=0,sumz=0;
        for(int i=0;i<t;i++){
            sumx=sumx+arr[i][0];
            sumy=sumy+arr[i][1];
            sumz=sumz+arr[i][2];
        }

       if(sumx==0&&sumy==0&&sumz==0) cout<<"YES";
       else cout<<"NO";

    return 0;
}