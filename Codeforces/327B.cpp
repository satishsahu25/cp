#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>vp;
    int num=2;
    while(vp.size()!=n){
        vp.push_back(num);
        num++;
        for(int i=2;i<num;i++){
            if(num%i==0){
                num++;
            }
        }
    }

    for(int i=0;i<vp.size();i++){
        cout<<vp[i]<<" ";
    }


    return 0;
}