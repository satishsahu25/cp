#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;

    int summ=0;

    for(int i=0;i< n; i++){
        int x;cin>>x;
        summ+=x;
    }

    cout<<((summ/100.0)/n)*100;

    

    return 0;
}