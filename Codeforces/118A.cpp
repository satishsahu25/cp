#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    string wovowel="";

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||
        s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
            continue;
        }else{
            wovowel+=s[i];
        }
    }

    for(int i=0;i<wovowel.length();i++){
        if(wovowel[i]<91){
            wovowel[i]+=32;
        }
    }
    // cout<<wovowel;
    string final="";

    for(int i=0;i<wovowel.length();i++){
        final=final+"."+wovowel[i];
    }

cout<<final;
    return 0;
}