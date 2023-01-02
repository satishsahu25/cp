#include<bits/stdc++.h>
using namespace std;

int main(){

int t;cin>>t;
vector<pair<int,string>> vs;
    for(int i=0;i<t;i++){
        int x;cin>>x;
        string s;cin>>s;
        vs.push_back({x,s});  
    }

    for(int i=0;i<t;i++){
        char minn=vs[i].second[0];
        
        for(int j=0;j<vs[i].first;j++){
                if(minn<=vs[i].second[j]){
                    minn=vs[i].second[j];
                }
        }
        cout<<minn-96<<endl;
    }

    


    return 0;
}