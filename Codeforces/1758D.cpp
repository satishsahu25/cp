#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    vector<int>vi;

    for(int i=0;i<t;i++){
        int x;cin>>x;
        vi.push_back(x);
    }

    for(auto ele:vi){
       if(ele>5){
         int arr[ele];
        int sum=3*ele-8;
        for(int j=0;j<ele;j++){
            arr[j]=2*j+1;
            arr[j]=arr[j]+sum;
        }
        for(int k=ele/2-2;k<ele/2+2;k++){
            arr[k]=arr[k]+1;
        }
        //print
        for(int k=0;k<ele;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
       }else if(ele==2){
        cout<<3<<" "<<1<<endl;
       }else if(ele==3){
        cout<<3<<" "<<6<<" "<<7<<endl;
       }else if(ele==4){
         cout<<25<<" "<<21<<" "<<23<<" "<<31<<endl;
       }else if(ele==5){
        cout<<20<<" "<<29<<" "<<18<<" "<<26<<" "<<28<<endl;
       }
    
    }
    



    return 0;
}