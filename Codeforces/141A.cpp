#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    map<char,int> m1,m2;

    for(int i=0;s1[i]!='\0';i++){
        m1[s1[i]]++;
    }
     for(int i=0;s2[i]!='\0';i++){
        m1[s2[i]]++;
    }
    for(int i=0; s3[i]!='\0';i++){
        m2[s3[i]]++;
    }
    if(m1==m2) cout<<"YES";
    else cout<<"NO";
   



    return 0;
}