#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cin >> num;
    int m;
    cin >> m;

    map<int, int> vp;
    
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        vp[i] = x;
    }

    int l = 0, r = num;
    while (1)
    {
        if (vp[l] <= m)
        {
            l++;
        }
        else
        {
            for (int j = l; j <= r; j++)
            {
                int temp = vp[r];
                vp[r] = vp[r + 1];
                vp[r + 1] = temp;
            }
            vp[r] = vp[r] - m;
            l++;
        }
        int flag=0;
        for(int i=0; i < num; i++){
            if(vp[i]==0){
                flag++;
            }
        }
        if(flag==num) break;
    }
    cout<<l;


    return 0;
}