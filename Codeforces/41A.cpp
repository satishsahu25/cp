#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;


    int f=0;
    int size=s.length();
    for(int i=0;i<size;i++){
        if(s[i]!=t[size-1-i]){
            f=1;
            break;
        }
    }

    if(f==1) cout<<"NO";
    else cout<<"YES";
    


    
    
    return 0;
}