#include<bits/stdc++.h>
using namespace std;

// ******with zero ignoreance if coming at start*
// like 00302 is=302

int main(){

//  int t;cin>>t;
//     while(t--){
        
//     }
    string s;
    int num;
    cin>>s;
    int i;
    for(i=0;i<5;i++){
        if(s[i]=='0'){
            continue;
        }else{
            break;
        }
    }
    string subs=s.substr(i,5);
    cout<<subs<<endl;
    num=stoi(subs);
    // cout<<endl<<s;
     cout<<endl<<num+10;

    return 0;
}