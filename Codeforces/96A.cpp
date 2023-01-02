#include<bits/stdc++.h>
using namespace std;

int main(){
    string sub0="0000000";
    string sub1="1111111";

    string s;cin>>s;

int f=0;
    if(s.length()<7) cout<<"NO";
    else{
        int size=s.length()-7;
        for(int i=0;i<=size;i++){
            if(s.substr(i,7)==sub0 || s.substr(i,7)==sub1){
                f=1;
                break;
            }
        }
        if(f==0) cout<<"NO";
        else cout<<"YES";
    }


    
    
    return 0;
}