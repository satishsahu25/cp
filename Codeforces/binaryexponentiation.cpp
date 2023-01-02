#include <bits/stdc++.h>
using namespace std;
#define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int,int>
#define vi vector<int>
#define vp vector<pair<int,int>>

const double PI =3.141592653589793238460;


int main()
{
    int base=2,n=13;
    int res=1;
    int p=5;

    // to find (base^n)%p

    while(n!=0){
        //even
         if(n%2==0){
            base=(base*base)%p;
            n=n/2;
         }else{
            //odd
            res=(res*base)%p;
            n--;
         }
    }

    cout<<res;
    
   


    return 0;
}