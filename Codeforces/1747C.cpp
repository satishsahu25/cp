#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    int t;cin>>t;
    for(int j=0;j<t;j++){
         int size;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

   int minn=*min_element(v.begin(),v.end());
    if(minn==v[0]){
            cout<<"Bob"<<endl;
    }else{
        cout<<"Alice"<<endl;
    }

    }

   
    return 0;
}