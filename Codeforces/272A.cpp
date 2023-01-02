#include<bits/stdc++.h>
using namespace std;

int main(){

    int numfr;cin>>numfr;

int fing[numfr];
int tfing=0;
    for(int i=0;i<numfr;i++){
        int x;cin>>x;
        fing[i]=x;
        tfing+=x;
    }

    int r=tfing%(numfr+1);
    if(r==0){
        numfr-1;
    }else{
        
    }
   
   
    return 0;
}