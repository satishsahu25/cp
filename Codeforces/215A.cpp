#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arrn[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arrn[i] = x;
    }
    int m;cin>>m;

    int arrm[m];
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arrm[i] = x;
    }
int maxr=0;

// int f=0;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<m;j++){
//             if(arrm[j]%arrn[i]==0){
//                 maxr=arrm[j]/arrn[i];
//                 f=1;
//                 break;
//             }
//         }
//         if(f==1) break;
//     }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arrm[j]%arrn[i]==0){
                if(maxr<arrm[j]/arrn[i]){
                    maxr=arrm[j]/arrn[i];
                }
            }
        }
    }

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arrm[j]%arrn[i]==0){
                if(maxr==arrm[j]/arrn[i]){
                    count++;
                }
            }
        }
    }

    cout<<count;
    return 0;
}