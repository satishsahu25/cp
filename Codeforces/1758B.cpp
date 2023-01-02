#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> vi;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vi.push_back(x);
    }


    for (int i = 0; i < n; i++)
    {
        vector<int> vans;
        if (vi[i] % 2 == 0)
        {
            vans.push_back(1);
            vans.push_back(3);
            for (int j = 2; j < vi[i]; j++)
            {
                vans.push_back(2);
            }
        }
        else
        {
            for (int j = 0; j < vi[i]; j++)
            {
                vans.push_back(5);
            }
        }

        for(auto ele:vans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return 0;
}