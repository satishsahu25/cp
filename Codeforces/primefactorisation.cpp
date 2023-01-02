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
     int n=5012;
     int i;
     for( i=2;i*i<=n;i++){
        if(n%i==0){
            int powercount=0;
            while(n%i==0){
                n=n/i;
                powercount++;
            }
            cout<<i<<"^"<<powercount<<endl;
        }
     }
    if(n>1) cout<<n<<"^"<<1<<endl;

    return 0;
}