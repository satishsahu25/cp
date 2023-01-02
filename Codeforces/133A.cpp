#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    vector<char> v;
    
    for(int i=0; i<s.length(); i++){
        v.push_back(s[i]);
    }

    auto it1=find(v.begin(),v.end(),'H');
    auto it2=find(v.begin(),v.end(),'Q');
    auto it3=find(v.begin(),v.end(),'9');
    // auto it4=find(v.begin(),v.end(),'+');

    if(it1!=v.end() || it2!=v.end() || it3!=v.end())
    cout<<"YES";
    else cout<<"NO";

    return 0;
}