#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    vector<pair<int,int>> vp;

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x , y});
    }

    for (int i = 0; i < t; i++)
    {
        int two = 0, five = 0,num=vp[i].first;

        while (vp[i].first%2==0){
                two++;
                vp[i].first=vp[i].first/2;
        }
         while (vp[i].first%5==0){
                five++;
                vp[i].first=vp[i].first/5;
        }
        long long int k=1;

        if(two>five){
            for(int t=0;t<(two-five)&&k*5<=vp[i].second;t++){
                k=k*5;
            }
        }else{
            for(int t=0;t<abs(two-five)&&k*2<=vp[i].second;t++){
                k=k*2;
            }
        }

        while(k*10<=vp[i].second){
            k=k*10;
        }

        cout<<(vp[i].second/k)*k*num<<endl;

    }

    return 0;
}