#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    set<char> st;
    for(int i=0;i< s[i]!='\0'; i++){
            st.insert(s[i]);
    }

    int len=st.size();

    if(len%2==0) cout<< "CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

    return 0;
}