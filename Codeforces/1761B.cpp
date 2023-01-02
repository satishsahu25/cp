#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

   
    for (int i = 0; i < t; i++)
    {
        int size;cin>>size;
        int arr[size];
        int f=0;
          for(int j=0;j<size;j++){
          int x;cin>>x;
          arr[j]=x;
        }
        for(int j=0;j<size;j++){
            if(arr[(j-1+size)%size]!=arr[(j+1)%size]){
                f=1;
                break;
            }
        }
        if(f==1) cout<<size<<endl;
        else cout<<(size/2)+1<<endl;
       
    }

        return 0;
}