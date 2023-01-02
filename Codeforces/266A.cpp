#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    string s;cin>>s;

    int r=0;
    for(int i = 0; i<n; i++){
        if(s[i]==s[i+1]){
            r++;
        }
    }

    cout<<(r);

    return 0;
}