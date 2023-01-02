#include <bits/stdc++.h>
using namespace std;

// *********MY APPROACH*****////
int main()
{

     int t;cin>>t;
        for(int i=0;i<t;i++){
    int n;
    cin >> n;
    vector<int> v;

    for (int j = 0; j < n; j++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    reverse(v.begin(), v.end());

    set<int> s;
    int count = 0;
    for (auto ele : v)
    {

        if (s.find(ele) == s.end())
        {
            s.insert(ele);
            count++;
        }
        else break;
    }

    cout<<n-count<<endl;
    
    //    printing
    // for (int i = count; i > 0; i--)
    // {
    //     cout << v[i - 1] << " ";
    // }

    }
    return 0;
}