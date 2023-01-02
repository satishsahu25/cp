#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    int t;cin>>t;

    vector<vector<int>> vv;

    for(int i=0;i<t;i++){
        vector<int> v;
        for(int j=0;j<3;j++){
            int x;cin>>x;
            v.push_back(x);
           }
           vv.push_back(v);
    }

    for(int i=0;i<t;i++){
        int maxx=*max_element(vv[i].begin(),vv[i].end());
        if(maxx==0){
                    cout<<1<<" "<<1<<" "<<1;
        }else{
            for(int j=0;j<3;j++){
            if(vv[i][j]<maxx){
            cout<<maxx-vv[i][j]+1<<" ";
        }else{
            cout<<0<<" ";
        }
        }
        }
        cout<<endl;
    }

   
 


    return 0;
}