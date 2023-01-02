#include <bits/stdc++.h>
using namespace std;

// *********MY APPROACH*****////
int main()
{

    int t;
    cin >> t;
    vector<pair<int,int>> vp;


    for (int i = 0; i < t; i++)
    {
     int row,col;
     cin>>row>>col;
        vp.push_back({row,col});
    }
    
    for (auto ele:vp)
    {
        if(ele.first>ele.second) cout<<(2*ele.second)+ele.first-2<<endl;
        else if(ele.first==1&&ele.second==1) cout<<0<<endl;
        else cout<< (2*ele.first)+ele.second-2<<endl;
     
    }

    return 0;
}