#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> vp;

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }

    for (int i = 0; i < t; i++)
    {
        int n = vp[i].first;
        int x = vp[i].second;

       if(n>3){
         if(n%x==0){
            int arr[n + 1];
        for (int k = 1; k < n + 1; k++)
        {
            arr[k] = k;
        }
        // for(int i=1;i<n+1;i++){
        //     cout<<arr[i]<<" ";
        // }
        

        arr[n] = 1;
        arr[1] = x;
        arr[x] = n;

        int m = x+1;
        int init = m;
        bool nahi = 5;
        while (nahi == 5)
        {
            int fl = 0;
            for (m = init; m < n + 1; m=m+x)
            {
                if (arr[m] % x == 0 && n % arr[m] == 0)
                {
                    int temp = arr[x];
                    arr[x] = arr[m];
                    arr[m] = temp;
                    fl = 1;
                    break;
                }
                else
                {
                    nahi = 6;
                    break;
                }
            }
            if (fl == 1)
                init = m;
        }
        for(int i=1;i<n+1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }else{
            cout<<-1<<endl;
        }
       }
        else if(n==3)cout<<3<<" "<<2<<" "<<1<<endl;
        else if(n==2) cout<<n<<" "<<1<<endl;
    }

   

    return 0;
}