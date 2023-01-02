#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<char> v;

    for(int i = 0; i < n; i++){
        char ch;
        cin >>ch;
        v.push_back(ch);
    }
    for(int j=0; j<t; j++){
        for(int i = 0; i < n; i++){
            if(v[i]=='B'&&v[i+1]=='G'){
                char temp;
                temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
                i++;
            }
        }
    }

    //printing

    for(int i = 0; i < n; i++){
        cout<<v[i];
    }

    return 0;
}