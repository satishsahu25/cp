#include <bits/stdc++.h>
using namespace std;

void ans(int n, int k, int b, int s)
{
    int arr[n];
    arr[0] = k * b;
    int sum = k * b;
    int flag=0;
    for (int i = 1; i < n; i++)
    {
        if (s - sum < 0)
        {
          flag=1;
            break;
        }
        else{
            arr[i] = min(s - sum, k - 1);
            sum += arr[i];
        }
    }

   if(flag==0){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   }else{
    cout<<-1;
   }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        ans(n, k, b, s);
    }

    return 0;
}