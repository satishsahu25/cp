#include <bits/stdc++.h>
using namespace std;

// *********MY APPROACH*****////
int main()
{

    int t;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (auto ele : v)
    {
        vector<int> vp;
        int init = 9;
        int num = 0;
       if(ele>=init){
         while (ele >= init && ele!=0 && init!=0)
        {
            vp.push_back(init);
            ele = ele - init;
            init--;
        }
        if(ele<init) vp.push_back(ele);
        reverse(vp.begin(), vp.end());

        for (int i = 0; i < vp.size(); i++)
        {
            num = num + vp[i];
            if (i != vp.size() - 1)
                num = num * 10;
        }
        cout << num << endl;
       }else{
        cout<<ele<<endl;
       }
    }

    return 0;
}