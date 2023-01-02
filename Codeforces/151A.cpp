#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int tmilk=k*l;
    int tslice=c*d;
    int tsalt=p;

    // int milk=tmilk/nl;
    // int slice=tslice/1;
    // int salt=p/np;

    int arr[3]={tmilk/n,tsalt/n,tslice/n};
    sort(arr,arr+3);

    cout<<arr[0];

    

    return 0;
}