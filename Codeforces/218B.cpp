#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[m],arr2[m];
    vector<int> arr,arr2;
    int maxx = 0, minn = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
        arr2[i]=x;
    }

    for(int i=0;i<n;i++){
        int *p=max_element(arr,arr+n);
        maxx=maxx+*max_element(arr,arr+n);
        *p=*p-1;
    }

     for(int i=0;i<n;i++){
       
        int *p=min_element(arr2,arr2+n);
        
        minn=minn+*min_element(arr2,arr2+n);
        *p=*p-1;
    }

    cout << maxx << " " << minn << endl;
    return 0;
}