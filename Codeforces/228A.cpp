#include<bits/stdc++.h>
using namespace std;

int main(){

    map<long,long> mp;
  
    for(int i=0;i<4;i++){
        long x;cin>>x;
        mp[x]++;
    }

    // int ct=0;
    // for(auto ele:mp){
    //     if(ele.second>1){
    //         ct++;
    //     }
    // }
    // cout<<ct;
    if(mp.size()==4) cout<<0;
    else if(mp.size()==3) cout<<1;
    else if(mp.size()==2) cout<<2;
    else cout<<3;



    

    return 0;
}