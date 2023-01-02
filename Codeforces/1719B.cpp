#include<bits/stdc++.h>
using namespace std;

// *********MY APPROACH*****////

void check(int arr[],int n,int k){
    int f=0;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i+2){
        if(((arr[i]+k)*arr[i+1])%4==0){
            f=1;
            vp[i].first=arr[i];
            vp[i].second=arr[i+1];
            continue;
        }else if(((arr[i+1]+k)*arr[i])%4==0){
            f=1;
             vp[i].first=arr[i+1];
             vp[i].second=arr[i];
            continue;
        }else{
            continue;
        }
    }
    if(f==1){
        cout<<"YES";
        for(int i=0;i<vp.size(); i++){
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
    }
    if(f==0) cout<<"NO";
}

int main(){

 int t;cin>>t;
    for(int i=0;i<t;i++){
        int n,k; 
        cin>>n>>k;
        int arr[n];
        for(int j=1;j<=n;j++){
            arr[j-1]=j;
        }    
        check(arr,n,k);
    }
    return 0;
}