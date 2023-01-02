#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin>>n;
    long long int arr[n];

    for(int i=0;i<n;i++){
        long long int x;cin>>x;
        arr[i]=x;
    }
    long long int maxe=*max_element(arr,arr+n);
    long long int mine=*min_element(arr,arr+n);
    long long int maxd=abs(maxe-mine);

    long long int countmax=count(arr,arr+n,maxe);
   
    long long int countmine=count(arr,arr+n,mine);
   
    if(maxd==0){
        cout<<0<<" "<<countmax*(countmax-1)/2;
       
    }else{
         cout<<maxd<<" "<<countmax*countmine;
    }










    
    return 0;
}