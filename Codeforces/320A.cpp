#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int f=0;
    for(int i=0;s[i]!='\0'; i++){
        if( s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i=i+2;
            f=1;
            continue;

        }else if(s[i]=='1'&&s[i+1]=='4'){
            i=i+1;
            f=1;
            continue;

        }else if(s[i]=='1'){
            f=1;
            continue;
        }else{
            f=0;
            break;
        }

    }
    if(f==0) cout<<"NO";
    else cout<<"YES";

    return 0;
}