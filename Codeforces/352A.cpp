#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    map<int,vector<int>>mp;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x].push_back(i);
    }

cout<<mp.size()<<endl;
   set<pair<int,int>>st;
    for(auto ele:mp){
        if(ele.second.size()==1){
           st.insert({ele.first,0});
        }else
        st.insert({ele.first,abs(ele.second[0]-ele.second[1])});
    }

    for(auto ele:st){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
   
    

    
    return 0;
}