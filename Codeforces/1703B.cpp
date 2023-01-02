#include<bits/stdc++.h>
using namespace std;

// *********MY APPROACH*****////
int main(){

 int t;cin>>t;
    for(int i=0;i<t;i++){
        int len;cin>>len;
        string s;cin>>s;
        set<char>st;
        int bl=0;
        for(int i=0;i<len;i++){
            if(st.find(s[i])==st.end()) bl+=2;
            else bl++;
            st.insert(s[i]);
        }
        cout<<bl<<endl;
 
    }
    return 0;
}