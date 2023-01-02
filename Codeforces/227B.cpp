#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arrnum[n];

    for(int i=0;i < n; i++){
        int x;cin>>x;
        arrnum[i]=x;
    }

    int q;
    cin>>q;
    int arrq[q];
    for(int i=0;i < q; i++){
        int x;cin>>x;
        arrq[i]=x;
    }
    int vasya=0,petya=0;

   for(int j=0;j<q;j++){
     for(int i=0; i < n; i++){
        if(arrq[j]==arrnum[i]){
            vasya++;
            break;
        }else{
            vasya++;
        }
    }
   }

     for(int j=0;j<q;j++){
     for(int i=n-1; i >=0; i--){
        if(arrq[j]==arrnum[i]){
            petya++;
            break;
        }else{
            petya++;
        }
    }
   }

   cout<<vasya<<" "<<petya<<endl;

    return 0;
}