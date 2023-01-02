#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;

    int len=str1.size();
    string str3="";

    for(int i=0; i<len; i++){

        if(str1[i]==str2[i]) str3=str3+'0';
        else str3=str3+'1';

    }

    cout<<str3;





    return 0;
}