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

int arr[1000001];

int main()
{
    int maxn=1000000;

    int num=100;
    for(int i=2;i<=maxn;i++){
       if(arr[i]==0){ for(int j=i;j<=maxn;j=j+i){
           if(arr[j]==0) arr[j]=i;
        }}
    }
    while(num>1){
        cout<<arr[num]<<endl;
        num=num/arr[num];
    }

    return 0;
}