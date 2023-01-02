#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int count=0;
    // cout<<sqrt(n)<<" "<<sqrt(m)<<endl;
    for(int i=0;i<=sqrt(n);i++){
        for(int j=0;j<=sqrt(m);j++){
            if(pow(i,2)+j==n &&pow(j,2)+i==m) count++;
        }

    }

    cout<<count;


    return 0;
}