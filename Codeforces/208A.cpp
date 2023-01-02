#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

int f=0;
 for(int i=0;i<s.length();i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            if(f!=0){
                 cout<<" ";
                 f=1;
            }
            continue;
        }
        else{   f=1;
              cout<<s[i];
        }
    }
    
    return 0;
}