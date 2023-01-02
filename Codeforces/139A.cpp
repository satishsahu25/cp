#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    int arr[7];

    for(int i=0;i<7;i++){
        int x;cin>>x;
        arr[i]=x;
    }
    
    int i=0;
   while(1){
    if(i==7) i=0;
    if(n<=0){
        break;
    }else{
        n=n-arr[i];
        i++;
    }
    
   }
   cout<<i;

    return 0;
}