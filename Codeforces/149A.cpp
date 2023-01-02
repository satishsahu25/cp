#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k;
    cin >> k;
    int arr[12];

int total=0;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
        total+=x;
    }

    sort(arr, arr + 12);

   if(total<k){
    cout<<-1;
   }else{
     int count = 0, sum = 0;

    for (int i = 11; i >= 0; i--)
    {

        if (sum < k)
        {
            sum += arr[i];
            count++;
        }
        else
        {
            break;
        }
    }

    cout<<count;
   }
  

   

    return 0;
}