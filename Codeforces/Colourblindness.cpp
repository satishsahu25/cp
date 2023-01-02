#include<bits/stdc++.h>
using namespace std;

void color(){
    int n;cin>>n;
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    int flag=0;
    for(int i=0;i<n;i++){
        if(
            (str1[i]=='R'&& str2[i]=='G')||
            (str1[i]=='R'&& str2[i]=='B')||
            (str1[i]=='G'&& str2[i]=='R')||
            (str1[i]=='B'&& str2[i]=='R')){
                flag=1;
            }
    }
    if(flag==1){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    cout<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        color();
    }

    return 0;
}