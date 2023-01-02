#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// int isprime[1000001];
int isprime[1001];
int main()
{
    //  int maxN=1000000
    int maxN=1000;
    for(int i=1;i<=maxN;i++) isprime[i]=1;
    isprime[0]=isprime[1]=0;

    for(int i=2;i*i<=maxN;i++){
        if(isprime[i]){
            for(int j=i*i;j<=maxN;j=j+i){
                    isprime[j]=0;
            }
        }
    }

    for(int i=0;i<=maxN;i++){
        if(isprime[i]==1){
            cout<<i<<endl;
        }
    }
    

    return 0;
}