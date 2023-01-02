#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;



    for(int i=0;s1[i]!='\0'; i++){
        if(s1[i]>=97){
           s1[i]=s1[i]-32;
        }
         if(s2[i]>=97){
           s2[i]=s2[i]-32;
        }
        
    }
    // cout<<s1<<"  "<<s2;
    int f=0;
    for(int i=0;s1[i]!='\0'; i++){
        if(s1[i]==s2[i]) f=0;
        else if(s1[i]>s2[i]) f=1;
        else if(s1[i]<s2[i]) f=-1;
    }
    cout<<f;




    return 0;
}