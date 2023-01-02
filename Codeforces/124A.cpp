#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;

    if((a+b)%2==0) cout<<a+1;
    else
    cout<<(a+b)/2+1;


    
    
    return 0;
}