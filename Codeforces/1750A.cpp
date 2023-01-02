#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{

vector<vector<int>> vv;
    int t;cin>>t;
    
    for(int i=0;i<t;i++){
        vector<int>v;
        int size;
        cin>>size;
        for(int j=0;j<size;j++){
            int y;cin>>y;
            v.push_back(y);(y);
        }
        vv.push_back(v);
    }
    
    for(int i=0;i<t;i++){
        if(vv[i][0]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
   
 


    return 0;
}