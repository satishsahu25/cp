#include <bits/stdc++.h>
using namespace std;
// bool check(int i,int j,int n,int m,int d,int sx,int sy){
//     if((i>=1 && i<=n) && (j>=1&&j<=m)){
//        if((i!=sx+d && i!=sx-d)&&(j!=sy+d && j!=sy-d)&&(i!=sx&&j!=sy)){
//          return true;
//        }else{
//         return false;
//        }
// }else{
//     return false;
// }
// }
int dead()
{#include<bits/stdc++.h>
using namespace std;


int main(){


    return 0;
}
    int m, n, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    // vector<pair<int,int>> vp;
    // int ix=1,iy=1;
    // vp.push_back({ix+1,iy});
    // vp.push_back({ix,iy+1});
    if ((sx - d <= 1 && sy - d <= 1) || (sx + d >= n && sy + d >= m) || (sx - d <= 1 && sx + d >= n) || (sy - d <= 1 && sy + d >= m))
    {
        return -1;
    }
    else
    {
        return n + m - 2;
    }
}
int main()
{

    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        arr[i] = dead();
    }
    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}