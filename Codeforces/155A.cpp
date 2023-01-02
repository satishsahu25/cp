#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    
    int minn=arr[0],maxx=arr[0],count=0;

    for(int i=1;i<n;i++){
        if(arr[i]>maxx){
            maxx=arr[i];
            count++;
        }
        if(arr[i]<minn){
            minn=arr[i];
            count++;
        }
    }

    cout<<count;

 

    return 0;
}