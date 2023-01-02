#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    char arr[r][c];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <=c; j++)
        {

            char x;
            cin >> x;
            arr[i][j] = x;
        }
    }

int f=0;
char arr2[r][c];
for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <=c; j++)
        {
            if(f==0){
                 arr2[i][j]='W'; f=!f;
            }else{
                arr2[i][j]='B'; f=!f;
            }                                   
        }
        if(c%2==0) f=!f; 
    }

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <=c; j++)
        {
            if(arr[i][j]=='-') continue;
            else arr[i][j]=arr2[i][j];
            
                        
        }
    }


    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <=c; j++)
        { 
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}