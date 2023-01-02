#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int num;
    
    cin>>num;

   
int digit;
int count=0;
    while(num!=0){
        digit=num%10;
        if(digit==4 || digit==7){
            count++;   
        }
        num=num/10;
    }
    if(count==4||count==7) cout<<"YES";
    else cout<<"NO";
    


    



    return 0;
}