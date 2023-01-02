#include<bits/stdc++.h>
using namespace std;

// *********MY APPROACH*****////
int main(){

 int t;cin>>t;
 int arr[t];
    for(int i=0;i<t;i++){
        int x;cin>>x;
        arr[i]=x;
    }

    for(int i=0;i<t;i++){
        if(arr[i]==1) cout<<2<<endl;
        if(arr[i]>1) cout<<ceil(arr[i]/3.0)<<endl;
    }
    return 0;
}