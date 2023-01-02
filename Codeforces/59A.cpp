#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sm=0,cp=0;

    for(int i = 0; s[i]!='\0'; i++){

        if(s[i]>='a'){
            sm++;
        }else{
            cp++;
        }
    }


    if(cp>sm){
        for(int i = 0; s[i]!='\0'; i++){
            if(s[i]>='a') s[i]=s[i]-32;
        }
    }else{
        for(int i = 0; s[i]!='\0'; i++){
           if(s[i]<'a')  s[i]=s[i]+32;
        }
    }

    cout<<s;

    return 0;
}